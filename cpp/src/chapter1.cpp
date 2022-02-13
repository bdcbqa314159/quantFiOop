#include "../include/quantFiOop_bits/chapter1.hpp"
#include "../include/quantFiOop_bits/matrix.hpp"
#include <iostream>
#include <cstdlib>
#include <complex>

using namespace std;

void helloMessage()
{
    cout << "Hello World!" << endl;
}

void testingVariables()
{
    int i = -3;
    cout << "An integer: " << i << endl;
    double x = 3.5;
    cout << "A double precision floating point number: ";
    cout << x << endl;
    bool b = true;
    cout << "A boolean value: " << b << endl;
    char c = '$';
    cout << "A character: " << c << endl;
}

int staticVariableFunction(int x)
{
    static int previousValue{};
    int result = previousValue;
    previousValue = x;
    return result;
}

void testingStatic()
{
    int y{};
    int result{};

    y = 1;

    result = staticVariableFunction(y);
    cout << "After first function call: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl
         << endl;

    y = 3;

    result = staticVariableFunction(y);
    cout << "After secomd function call: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl
         << endl;

    y = 3;

    result = staticVariableFunction(y);
    cout << "After third function call: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl
         << endl;
}

void testingSwitch()
{
    int c{};

    cout << "Enter an integer between 1 and 7:" << endl;

    cin >> c;

    switch (c)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
}

int addOneByValue(int x)
{
    x++;
    return x;
}

int addOneByReference(int &x)
{
    x++;
    return x;
}

int addOneByPointer(int *x)
{

    *x += 1;
    return *x;
}

void testingFunctionCalls()
{

    int y{}, result{};

    result = addOneByValue(y);

    cout << "After function call by value: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl;

    y = 1;
    result = addOneByReference(y);

    cout << "After function call by reference: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl;

    y = 1;
    result = addOneByPointer(&y);
    cout << "After function call by pointer: " << endl;
    cout << "y is " << y << endl;
    cout << "The function returned " << result << endl;
}

using namespace algebra;
void testingMatrix()
{
    int i, j;
    algebra::Matrix A(3, 2, 0);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            A(i, j) = 0.1 * i * j;
        }
    }

    double sum{};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += A(i, j);
        }
    }

    cout << "The sum of the matrix elements is " << sum << endl;
}

using namespace algebra1;
void testingHierarchyMatrix()
{
    int i, j;
    algebra1::DenseMatrix A(3, 5), B(3, 5), C(3, 5), D(3, 5);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            A(i, j) = B(i, j) = C(i, j) = 0.1 * i * j;
        }
    }

    D = A + B + C;
    cout << "Matrix D is: " << endl;
    cout << D << endl;

    algebra1::DenseSquareMatrix E(4);
    algebra1::DiagonalMatrix F(4, 1.2);

    for (i = 0; i < 4; i++)
    {
        F(i, i) = -1.5;
        for (j = 0; j < 4; j++)
        {
            E(i, j) = 1.3 * i + j;
        }
    }

    cout << "Matrix F" << endl;
    cout << F << endl;

    cout << "The sum of E and F is " << endl;
    cout << E + F << endl;
}

using namespace algebra2;
void testingTemplateMatrix()
{
    int n = 5;
    int m = 3;
    int i, j;

    algebra2::DenseMatrix<double> D(n, m);

    algebra2::DenseMatrix<complex<double>> C(n, m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            D(i, j) = 0.1 * i * j;
            C(i, j) = complex<double>(i, j);
        }
    }

    double sum = 0;
    complex<double> csum = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += D(i, j);
            csum += C(i, j);
        }
    }

    cout << "The sum of the matrix elements in D is " << sum << endl;
    cout << "The sum of the matrix elements in C is " << csum << endl;
}
