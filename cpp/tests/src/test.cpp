#include <quantFiOop>
#include <iostream>
#include <boost/function.hpp>

double func(double x, double y)
{
    return x * y + y;
}

void show(boost::function<double(double x, double y)> f)
{
    std::cout << "hey we have " << f(1, 2) << std::endl;
}

int main()
{
    boost::function<double(double x, double y)> f;
    message();
    f = func;

    show(f);

    return 0;
}