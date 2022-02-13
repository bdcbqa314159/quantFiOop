cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(quantFiOop VERSION 0.1.0)

# Include dir
include_directories(/usr/local/include)

# Src
AUX_SOURCE_DIRECTORY(src SRC_FILES)

# Headers
set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include/quantFiOop_bits")

# Source files
set(SOURCE_FILES
    ${PROJECT_INCLUDE_DIR}/test.hpp
    ${PROJECT_INCLUDE_DIR}/chapter1.hpp
    ${PROJECT_INCLUDE_DIR}/matrix.hpp
    
    ${PROJECT_SOURCE_DIR}/test.cpp
    ${PROJECT_SOURCE_DIR}/chapter1.cpp
    ${PROJECT_SOURCE_DIR}/matrix.cpp
    
)

# Set up such that XCode organizes the files correctly
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

# Add library
add_library(quantFiOop SHARED ${SOURCE_FILES})

# Include directories
target_include_directories(quantFiOop PRIVATE include/quantFiOop_bits)

# Install
install(TARGETS quantFiOop DESTINATION lib)

# Install the headers
install(FILES include/quantFiOop DESTINATION include)

# Create base directory
install(DIRECTORY include/quantFiOop_bits DESTINATION include)
