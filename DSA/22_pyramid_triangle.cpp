#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n number\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i-1; l>=1; l--)
        {
            //  l+1-i;
            cout << l;
        }
        cout << endl;
    }

    return 0;
}