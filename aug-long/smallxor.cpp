#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<long long> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (auto it : A)
        {
            pq.push(it);
        }

        while (y > 0)
        {
            long long min = pq.top();
            if ((min ^ x) > min)
            {
                pq.pop();
                pq.push(min ^ x);
                y--;
            }

            else
                break;
        }

        if (y % 2)
        {
            int min = pq.top();
            pq.pop();
            pq.push(min ^ x);
        }

        while (pq.size())
        {
            cout << pq.top() << ' ';
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}

//  {
//             if (y & 1 == 0)
//             {
//                 break;
//             }

//             else
//             {
//                 pq.pop();
//                 pq.push(min ^ x);
//                 break;
//             }
//         }
//     }

//     int count = 0;
//     while (!pq.empty())
//     {
//         A[count] = pq.top();
//         pq.pop();
//         count++;
//     }

//     for (auto it : A)
//     {
//         cout << it << " ";
//     }
//     cout << endl;