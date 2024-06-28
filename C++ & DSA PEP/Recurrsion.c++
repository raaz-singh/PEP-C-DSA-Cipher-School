#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int power(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return 2 * power(a - 1);
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int fact = factorial(n);
    cout << "Factorial of the given number is: " << fact << endl;

    int pow = power(n);
    cout << "The power of 2 is: " << pow << endl;
}