#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n,x,y,res,minm;
    cin>>tc;
    while(tc>0)
    {
        cin>>n>>x>>y;
        if(x==1 || y==1 || x==n || y==n)
        res=(n-1)*3;
        else
        {
            res = (n-1)*3;
            if(x>n/2)
            x = (n+1)-x;
            if(y>n/2)
            y = (n+1)-y;
            minm = min(x,y);
            if(n%2!=0 && x==y && x==(n+1)/2)
            res += (n-1)*1;
            else
            res += (minm-1)*2;
        }
        cout<<res<<endl;
        --tc;
    }
    return 0;
}