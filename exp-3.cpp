#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int add(int a, int b = 10)
{
    return a + b;
}

int calculate(int a, int b)
{
    return a + b;
}

double calculate(double a, double b)
{
    return a * b;
}

int main()
{
    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter two decimal values: ";
    cin >> x >> y;

    cout << "\nSquare of first number = " << square(a);
    cout << "\nAddition using default argument = " << add(a);
    cout << "\nAddition using two arguments = " << add(a, b);
    cout << "\nAddition of integers = " << calculate(a, b);
    cout << "\nMultiplication of decimal numbers = " << calculate(x, y);

    return 0;
}