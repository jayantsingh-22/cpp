#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num;
        int minTime = 0, diff, i;
        cin >> num;
        int Atime[num] = {0}, Btime[num] = {0};

        for (i = 1; i < num; i++)
        {
            cin >> Atime[i];
            minTime += Atime[i];
            Btime[i] = Atime[i];
            Atime[i] = minTime;
        }

        for (i = 0; i < num - 1; i++)
        {
            diff = Atime[i + 1] - Btime[i];
            if (diff > 0)
                Btime[i + 1] += Btime[i] + diff;
            else
                Btime[i + 1] += Btime[i];
        }

        cout << Btime[i] << endl;
    }
    return 0;
}