#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, max = 0, h, count = 1;
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
            max = ar[n - 1];
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == ar[i + 1])
                    count++;
                else
                {
                    h = ar[i] + (count - 1);
                    count = 0;
                    if (h > max)
                        max = h;
                }
            }
        }
        cout << max << endl;
        --tc;
    }
    return 0;
}