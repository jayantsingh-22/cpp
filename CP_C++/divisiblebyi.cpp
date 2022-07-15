#include <iostream>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int a[n];
        a[n - 1] = n;
        int temp = n;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 != 0)
            {
                a[n - 1 - i] = temp - (n - i);
                temp = a[n - 1 - i];
            }

            if (i % 2 == 0)
            {
                a[n - 1 - i] = temp + (n - i);
                temp = a[n - 1 - i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}