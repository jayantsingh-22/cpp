#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc > 0)
    {
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int s = sizeof(ar) / sizeof(ar[0]);
        sort(ar, ar + s, greater<int>());
        if (n == 1)
            cout << ar[0] << endl;
        else
        {
            int max = 0, count = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i] == ar[i + 1])
                    count++;
                else
                {
                    if (max < ar[i] + count)
                    {
                        max = ar[i] + count;
                    }
                    count = 0;
                }
            }
            cout << max << endl;
        }
        --tc;
    }
    return 0;
}