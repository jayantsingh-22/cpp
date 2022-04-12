#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int testc,num=1;
    cin>>testc;
    while(testc>0)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=res)
        res++;
    }
    cout<<"Case #"<<num<<": "<<res-1<<endl;
    ++num;
    --testc;
    }
    return 0;
}