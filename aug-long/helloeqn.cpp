#include <iostream>
using namespace std;

void task()
{
    int num;
    cin >> num;
    for (int i = 1; i * i <= num; i++)
    {
        if ((num - 2 * i) % (i + 2) == 0 && num != 2 * i)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        task();
    }
}