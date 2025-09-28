#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character\n";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "lowercase and its value = " << (int)ch;
    else
        cout << "uppercase and its value = " << (int)ch;
        
    // int i = 0;
    // cout<<endl;
    // for(;i< 10;)
    // {
        
    //         i++;
    //         cout<<i;
    //     }
    return 0;
}