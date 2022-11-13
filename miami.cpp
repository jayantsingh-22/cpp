#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    float x,y;
    cin>>tc;
    while(tc>0)
    {
        cin>>x>>y;
        if(y<=(1.07*x))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        --tc;
    }
    return 0;
}