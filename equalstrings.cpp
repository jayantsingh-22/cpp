#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, len;
    cin >> tc;
    while (tc--)
    {
        cin >> len;
        char a[len], b[len];
        string c;
        cin >> a >> b;
        for (int i = 0; i < len; i++)
        {
            if (a[i] != b[i])
            {
                c = c + b[i];
            }
        }
        sort(c.begin(), c.end());
        int count = 1;
        for (int i = 0; i < c.size() - 1; i++)
        {
            if (c[i] != c[i + 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}