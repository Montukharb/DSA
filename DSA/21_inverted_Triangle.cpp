#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter n numbers\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
            count++;
        }
        for (int k = n; k >= i; k--)
        {
            cout << i;
            count++;
        }
        count++;
        cout << endl;
    }
    cout << "loop iterator = " << count;
    return 0;
}