#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter number\n";
    cin >> number;
   //number is complete divide by 2 and remainder == 0 then even number
    if (number % 2 == 0)
        cout << "Number is even " << number;

    else
        cout << "Number is odd " << number;

    return 0;
}