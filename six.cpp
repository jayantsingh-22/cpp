#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y;
    cin>>tc;
    while(tc>0)
    {
        cin>>x>>y;
        cout<<min(x*3,y*2)<<endl;
        --tc;
    }
    return 0;
}