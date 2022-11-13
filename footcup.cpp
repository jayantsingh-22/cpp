#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y;
    cin>>tc;
    while(tc>0)
    {
        cin>>x>>y;
        if(x>=1 && y>=1 && x==y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        tc--;
    }
    return 0;
}