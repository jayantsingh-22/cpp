#include<iostream>
using namespace std;
 int main()
 {
    long long int tc;
    cin>>tc;
    while(tc--)  
    {
        long long int n;
        cin>>n;
        long long int num;
        long long int sum = 0;
        for(long long int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
            sum%=998244353;
        }
        sum*=(sum-1);
        sum%=998244353;
        cout<<sum<<endl;
    }
    return 0;
 }