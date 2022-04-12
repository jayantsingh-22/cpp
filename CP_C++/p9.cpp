#include<iostream>
using namespace std;
long long gcd(long long m, long long n)
{
    if (m == 0)
    return n;
    if (n == 0)
    return m;
    if (m == n)
    return m;
    if (m > n)
    return gcd(m-n, n);
    return gcd(m, n-m); 
}
int main() 
{
 int n;
 cin>>n;
 while(n>0)
 {
     long long a,b;
     cin>>a>>b;;
     long long m = gcd(a,b);
     if(a==1 || b==1)
         cout<<"-1"<<endl;
    else
    {
        if(m != 1)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
    --n;
 }
 return 0;
}