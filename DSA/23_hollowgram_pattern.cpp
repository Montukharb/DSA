#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n number";
    cin >> n;
    // upper part
    for (int i = 1; i <= n; i++) // for example enter n = 4
    {
        // left side spaces
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        cout << "#";
        if (i != 1)
        {
            for (int j = 3; j <= 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "#";
        }
        cout << endl;
    }

    // bottom part
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "#";

        if (i != n - 1)
        {
            for (int k = 3; k <= 2 * (n - i) - 1; k++)
            {
                cout << " ";
            }
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}