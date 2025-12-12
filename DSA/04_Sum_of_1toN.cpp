#include <iostream>
using namespace std;

int main()
{
    float num;
    double count = 0;
    cout<<"Enter n number\n";
    cin>>num;
    
    for(int i =1;i<=num;i++)
    {
        count += i;  // or count = count + i;
    }
    
    cout<<"Sum of 1 To N numbers = "<<count;

    return 0;
}