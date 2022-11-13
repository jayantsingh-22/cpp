/* for any given number n, if there exist three numbers a,b and c such that
(a xor b)+(b xor c)+(c xor a) == n then print the values of a,b and c.
If there exist no three numbers a,b and c for the given number n, then print -1. Also a,b,c are > 0 */

#include <bits/stdc++.h>
using namespace std;

bool ispowerof2(long long n)
{
    if ((n & ~(n - 1)) == n)
        return true;
    else
        return false;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long a = (n & ~(n - 1));
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 0 && ispowerof2(n))
        {
            cout << "1"
                 << " " << (n / 2) + 1 << " " << (n / 2) + 1 << endl;
        }
        else
        {
            cout << a / 2 << " " << (n - a) / 2 << " " << n / 2 << endl;
        }
    }

    return 0;
}