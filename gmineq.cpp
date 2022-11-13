#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc>0)
    {
        cin>>n;
        int e,pos=0,neg=0;
        for(int i=0;i<n;++i)
        {
            cin>>e;
            if(e==1)
            pos++;
            else
            neg++;
        }
        if(abs(pos-neg)<2)
        cout<<"YES"<<endl;
        else if(abs(pos-neg)==2 && pos%2==0 && neg%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        --tc;
    }
    return 0;
}