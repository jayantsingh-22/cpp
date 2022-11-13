#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int r;
int minsteps(int **arr, int m, int n)
{
    int rs[n], rc[n];
    int mx = 0;
    memset(rs, 0, sizeof(rs));
    memset(rc, 0, sizeof(rc));
    for(int i=0; i<m;++i)
    {
        for (int j = 0; j < n; ++j) 
        {
            rs[i] += arr[i][j];
            rc[j] += arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) 
    {
        mx = max(mx, rs[i]);
        mx = max(mx, rc[i]);
    }
 
    int count = 0;
    for (int i = 0, j = 0; i < n && j < n;) 
    {
        int diff = min(mx - rs[i],mx - rc[j]);
        arr[i][j] += diff;
        rs[i] += diff;
        rc[j] += diff;
        count += diff;
        if (rs[i] == mx)
        ++i;
        if (rc[j] == mx)
        ++j;
    }
    return count;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        cin>>r;
        int **arr = new int*[r];
        for(int i=0;i<r;i++)
    {
         arr[i]=new int[r];
        for(int j=0;j<r;j++)
        cin>>arr[i][j];
    }
        cout << minsteps(arr,r,r) << "\n";
        --tc;
    }
    return 0;
}
 