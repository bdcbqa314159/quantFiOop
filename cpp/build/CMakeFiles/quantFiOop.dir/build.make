# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bernardocohen/repos/quantFiOop/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardocohen/repos/quantFiOop/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/quantFiOop.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/quantFiOop.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/quantFiOop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quantFiOop.dir/flags.make

CMakeFiles/quantFiOop.dir/src/test.cpp.o: CMakeFiles/quantFiOop.dir/flags.make
CMakeFiles/quantFiOop.dir/src/test.cpp.o: ../src/test.cpp
CMakeFiles/quantFiOop.dir/src/test.cpp.o: CMakeFiles/quantFiOop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/quantFiOop/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quantFiOop.dir/src/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/quantFiOop.dir/src/test.cpp.o -MF CMakeFiles/quantFiOop.dir/src/test.cpp.o.d -o CMakeFiles/quantFiOop.dir/src/test.cpp.o -c /Users/bernardocohen/repos/quantFiOop/cpp/src/test.cpp

CMakeFiles/quantFiOop.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quantFiOop.dir/src/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/quantFiOop/cpp/src/test.cpp > CMakeFiles/quantFiOop.dir/src/test.cpp.i

CMakeFiles/quantFiOop.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quantFiOop.dir/src/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/quantFiOop/cpp/src/test.cpp -o CMakeFiles/quantFiOop.dir/src/test.cpp.s

CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o: CMakeFiles/quantFiOop.dir/flags.make
CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o: ../src/chapter1.cpp
CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o: CMakeFiles/quantFiOop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/quantFiOop/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o -MF CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o.d -o CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o -c /Users/bernardocohen/repos/quantFiOop/cpp/src/chapter1.cpp

CMakeFiles/quantFiOop.dir/src/chapter1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quantFiOop.dir/src/chapter1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/quantFiOop/cpp/src/chapter1.cpp > CMakeFiles/quantFiOop.dir/src/chapter1.cpp.i

CMakeFiles/quantFiOop.dir/src/chapter1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quantFiOop.dir/src/chapter1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/quantFiOop/cpp/src/chapter1.cpp -o CMakeFiles/quantFiOop.dir/src/chapter1.cpp.s

CMakeFiles/quantFiOop.dir/src/matrix.cpp.o: CMakeFiles/quantFiOop.dir/flags.make
CMakeFiles/quantFiOop.dir/src/matrix.cpp.o: ../src/matrix.cpp
CMakeFiles/quantFiOop.dir/src/matrix.cpp.o: CMakeFiles/quantFiOop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/quantFiOop/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/quantFiOop.dir/src/matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/quantFiOop.dir/src/matrix.cpp.o -MF CMakeFiles/quantFiOop.dir/src/matrix.cpp.o.d -o CMakeFiles/quantFiOop.dir/src/matrix.cpp.o -c /Users/bernardocohen/repos/quantFiOop/cpp/src/matrix.cpp

CMakeFiles/quantFiOop.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quantFiOop.dir/src/matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/quantFiOop/cpp/src/matrix.cpp > CMakeFiles/quantFiOop.dir/src/matrix.cpp.i

CMakeFiles/quantFiOop.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quantFiOop.dir/src/matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/quantFiOop/cpp/src/matrix.cpp -o CMakeFiles/quantFiOop.dir/src/matrix.cpp.s

# Object files for target quantFiOop
quantFiOop_OBJECTS = \
"CMakeFiles/quantFiOop.dir/src/test.cpp.o" \
"CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o" \
"CMakeFiles/quantFiOop.dir/src/matrix.cpp.o"

# External object files for target quantFiOop
quantFiOop_EXTERNAL_OBJECTS =

libquantFiOop.dylib: CMakeFiles/quantFiOop.dir/src/test.cpp.o
libquantFiOop.dylib: CMakeFiles/quantFiOop.dir/src/chapter1.cpp.o
libquantFiOop.dylib: CMakeFiles/quantFiOop.dir/src/matrix.cpp.o
libquantFiOop.dylib: CMakeFiles/quantFiOop.dir/build.make
libquantFiOop.dylib: CMakeFiles/quantFiOop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardocohen/repos/quantFiOop/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libquantFiOop.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quantFiOop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quantFiOop.dir/build: libquantFiOop.dylib
.PHONY : CMakeFiles/quantFiOop.dir/build

CMakeFiles/quantFiOop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quantFiOop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quantFiOop.dir/clean

CMakeFiles/quantFiOop.dir/depend:
	cd /Users/bernardocohen/repos/quantFiOop/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardocohen/repos/quantFiOop/cpp /Users/bernardocohen/repos/quantFiOop/cpp /Users/bernardocohen/repos/quantFiOop/cpp/build /Users/bernardocohen/repos/quantFiOop/cpp/build /Users/bernardocohen/repos/quantFiOop/cpp/build/CMakeFiles/quantFiOop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quantFiOop.dir/depend

