#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    float x;
    cin>>tc;
    while(tc>0)
    {
        cin>>x;
        cout<<max(0.1*x,100.00)<<endl;
        --tc;
    }
    return 0;
}