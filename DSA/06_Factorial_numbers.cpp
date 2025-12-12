#include <iostream>
using namespace std;

int factorial_num(int n);
int main()
{
    int n;
    cout << "Enter n number\n";
    cin >> n;
    cout << "Factorial number is = " << factorial_num(n);
    return 0;
}

// factorial number calculate with recurssion function
int factorial_num(int n)
{
    if (n == 1)
        return 1;

    return n * factorial_num(n - 1);
}