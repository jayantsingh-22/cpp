#include<iostream>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc>0)
    {
        cin>>n;
        if(n%2==0 && n>2)
        cout<<((n/2)+1)<<endl;
        else if(n%2!=0 && n>2)
        cout<<((n+1)/2)<<endl;
        --tc;
    }
} 