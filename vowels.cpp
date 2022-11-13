#include <bits/stdc++.h>
#include <iostream>
using namespace std;

 int isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return 0;
    else
    return 1;
}
int main() {
	int tc,len,count=0,count2=0;
	char temp,temp2;
	cin>>tc;
	while(tc>0)
	{
		cin>>len;
		char str[len];
		for(int i=0;i<len;++i)
        {
		cin>>(str[i]);
        str[i] = tolower(str[i]);
        }

        count=0,count2=0;
		for(int i=0;i<(len/2)-1;++i)
		{
			if(isvowel(str[i])==0 && isvowel(str[i+1])==1)
			{
				swap(str[i],str[i+1]);
				++count;
			}
		}
		for(int j=len-1;j>=len/2;--j)
		{
            for(int k=len-1;k>=len/2;--k)
            {
			if(isvowel(str[k])==0 && isvowel(str[k-1])==1)
			{
				swap(str[k-1],str[k]);
				++count2;
			}
            }
		}
		--tc;
	cout<<(count+count2)<<endl;
    }

	return 0;
}