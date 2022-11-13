#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int tc,n,p,yes=0,no=0;
	cin>>tc;
	while(tc>0)
	{
		cin>>n;
		int *arr = new int[n]; 
		for(int i=0;i<n;++i)
		cin>>arr[i];
        yes=0,no=0;
		for(int i=0;i<n-1;++i)
		{
                if((arr[i]&arr[i+1]) > 0 && (arr[i]<arr[i+1]))
                ++yes;
                else if((arr[i]&arr[i+1]) == 0 && (arr[i]<arr[i+1]))
                ++yes;
                else if((arr[i]&arr[i+1]) == 0 && (arr[i]>arr[i+1]))
                ++no;  
                else
                ++yes;
        }          
        if(no>0)
        cout<<"No"<<endl;
        else if((yes>0 && no==0))
        cout<<"Yes"<<endl;
            delete[] arr;
		--tc;
	}
}