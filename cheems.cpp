#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int tc,len;
    string str;
    cin>>tc;
    while(tc>0)
    {
        cin>>len;
        cin>>str;
        if(str.length()==len)
        {
        if (str.find('m') != string::npos ||str.find('M') != string::npos )
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        --tc;
    }
    return 0;
}