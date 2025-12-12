#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two number\n";
    cin>>num1>>num2;  //taking input in two numbers
     
    if(num1<num2)   //compare num1 and num2 which is greater than other
       cout<<"Minimum number is first = "<<num1;

    else
       cout<<"Minimum number is second = "<<num2;

 return 0;
}