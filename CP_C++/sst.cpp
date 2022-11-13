#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    float a,b;
    cin>>tc;
    while(tc>0)
    {
        cin>>a>>b;
        if((a*100.00/10.00) > (b*100.00/20.00))
        cout<<"FIRST"<<endl;
        else if((a*100.00/10.00) < (b*100.00/20.00))
        cout<<"SECOND"<<endl;
        else if((a*100.00/10.00) == (b*100.00/20.00))
        cout<<"ANY"<<endl;
        --tc;
    }
    return 0;
}