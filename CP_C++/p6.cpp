//Codechef april long cook Q3.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,a,b;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b;
        if(a%2==0)
        {
            if((a+2)<=b)
            cout<<a<<" "<<a+2;
            else
            cout<<"-1";
        }
        else if(a%3==0)
        {
            if((a+3)<=b)
            cout<<a<<" "<<a+3;
            else
            cout<<"-1";
        }
        else{
            if((a+3)<=b)
            cout<<a+1<<" "<<a+3;
            else
            cout<<"-1";
        }
        cout<<endl;
        --t;
    }
	return 0;
}