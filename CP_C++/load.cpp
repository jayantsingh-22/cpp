#include <bits/stdc++.h>
using namespace std;

int main()
{
    int servers, sum;
    cin >> servers;
    int a[servers];
    for (int i = 0; i < servers; ++i)
    {
        cin >> a[i];
    }
    int size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);

    for (int i = 0; i < servers; ++i)
    {
        sum += a[i];
    }

    int min = a[0];
    if (sum % servers != 0)
        cout << (sum / servers) - min << endl;
    else
        cout << (sum / servers) << endl;

    return 0;
}