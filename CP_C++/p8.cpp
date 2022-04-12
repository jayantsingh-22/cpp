#include<iostream>
using namespace std;
int main()
{
    int n,a,b,gcd;
    cin>>n;
    while(n>0)
    {
        cin>>a>>b;
        if(a==1 || b==1)
        cout<<"-1"<<endl;
        else
        {
        for(int i=1;i<=a && i<=b;++i)
        {
            if(a%i==0 && b%i==0)
            gcd = i;
        }
       if(gcd!=1)
       cout<<"0"<<endl;
       else
       cout<<gcd<<endl;
        }
       --n;
}
return 0;
}