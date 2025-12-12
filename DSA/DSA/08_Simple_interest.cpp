#include <iostream>
using namespace std;

int main()

{
    double principle, rate, time, amount = 0, interest = 0;
    cout << "Enter Principal\n";
    cin >> principle;
    cout << "Enter Rate\n";
    cin >> rate;
    cout << "Enter Time\n";
    cin >> time;

    // calculation
    interest = (principle * rate * time) / 100;
    amount = interest + principle;

    cout << "Total interest is = " << interest << endl;
    cout << "Total amount is = " << amount;

    return 0;
}