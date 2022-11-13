#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x, y, count;
        cin >> x >> y;
        long long res = abs(x - y);
        count = res / 10;
        if (res % 10 > 0)
        count++;

        cout<<count<<endl;
    }
    return 0;
}