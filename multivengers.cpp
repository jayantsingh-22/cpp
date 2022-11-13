#include<iostream>
#include<algorithm>
using namespace std;

long long maxSum(long long a[], long size)
{
    long long max = LONG_LONG_MIN, new_max = 0;
 
    for (long long i = 0; i < size; i++)
    {
        new_max = new_max + a[i];
        if (max < new_max)
            max = new_max;
 
        if (new_max < 0)
            new_max = 0;
    }
    return max;
}

int main()
{
    long long M = 1000000007;
    long long tc,n,c=0;
    cin>>tc;
    while(tc>0)
    {
        cin>>n;
        long long ar[n];
        for(long long i=0;i<n;++i)
        {
            cin>>ar[i];
            if(ar[i]>0)
            ++c;
        }
        if(c==0)
        cout<<*max_element(ar, ar + n) % M<<endl;
        else
        {
        long long s= sizeof(ar)/sizeof(ar[0]);
        long long max_sum = maxSum(ar, s);
        cout<<(max_sum)%M<<endl;
        }
        --tc;
    }
    return 0;
}