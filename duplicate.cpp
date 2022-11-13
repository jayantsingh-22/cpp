//Finding the number of duplicates of every element in the array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0;
    cout<<"Input number of elements for the array :";
    cin>>n;
    int ar[n];
    cout<<"\nInput elements of the array : "<<endl;
    for(int i=0;i<n;++i)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;++i)
    {
        if(ar[i] == ar[i+1])
        {
            j=i+1;
            while(ar[j] == ar[i])
            j++;
            cout<<ar[i]<<" is appearing "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
    return 0;
}