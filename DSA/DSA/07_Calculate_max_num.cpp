#include <iostream>
using namespace std;

int main()

{

    int n1, n2;
    n1 = n2 = 0; // its safe assin zero remove garbage
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;

    if (n1 > n2)
        cout << "number 1 is greater than 2 = " << n1;
    else
        cout << "number 2 is greater than 1 = " << n2;

    return 0;
}