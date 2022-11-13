#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc>0)
    {
        cin>>n;
        int *ar = new int[n];
        for(int i=0;i<n;++i)
        {
            cin>>ar[i];
        }
        int c=0;
        for(int i=0;i<n-1;++i)
        {
            if(ar[i]>ar[i+1])
            ++c;
            if((i<n-2) && (ar[i]>ar[i+2]))
            ++c;
            if(c>1)
            {
                break;
            }
        }
    if(c<2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    --tc;
    }
    return 0;
}