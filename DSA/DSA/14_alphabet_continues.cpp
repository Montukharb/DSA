#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n number\n";
    char ch = 'A';
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(ch == ('Z' + 1))
             break;
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
