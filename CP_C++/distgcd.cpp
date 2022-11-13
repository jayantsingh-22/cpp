#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tc, a, b, count = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        int res = abs(a - b);
        for (int i = 1; i <= sqrt(res); i++)
        {
            if (res % i == 0)
            {
                if (res / i == i)
                    count += 1;
                else
                    count += 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}