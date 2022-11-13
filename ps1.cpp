#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    map<char, int>s;
	    int temp=0;
	    if((str.length())%2==1)
	    cout<<"NO"<<endl;
	    else{
	   for(int i=0; i<str.length(); i++){
	           s[str[i]]++;
	       }
	       for(auto i:s){
	           if(i.second%2){
	               temp=1;
	               cout<<"NO"<<endl;
	               break;
	           }
	       }
	       if(!temp)
	       cout<<"YES"<<endl;
	    }
	}
	return 0;
} 