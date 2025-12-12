#include <iostream>
using namespace std;

int main()

{
    int age;

    cout << "Enter age\n";
    cin >> age;
    cout << ((age >= 18) ? "You are eligible to apply driving licence" : "Not eligible");

    return 0;
}