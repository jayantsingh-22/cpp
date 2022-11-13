#include <iostream>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << "YES" << endl;

        if (a > b)
        {
            while (b < a)
            {
                b *= 2;
            }
            if (b == a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (b > a)
        {
            while (a < b)
            {
                a *= 2;
            }
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

// int tc;
// cin >> tc;
// while (tc--)
// {
//     int a, b;
//     cin >> a >> b;

//     if ((a == 2 * b) || (b == 2 * a))
//         cout << "YES" << endl;

//     else if ((a > b) && ((a / b) % 2) == 0 && ((a / b) & 2) == 0)
//         cout << "YES" << endl;

//     else if ((b > a) && ((b / a) % 2) == 0 && ((b / a) & 2) == 0)
//         cout << "YES" << endl;

//     else if (a == b)
//         cout << "YES" << endl;

//     else if (a == 0 || b == 0)
//         cout << "NO" << endl;

//     else
//         cout << "NO" << endl;
// }
// return 0;
