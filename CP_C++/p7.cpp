#include <iostream>
using namespace std;

int main() 
{
    int n,a;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        if(a%4==2 || a%4==3)
        cout<<"3"<<endl;
        else if(a%4==0)
        cout<<a+3<<endl;
        else if(a%4==1 && a>1)
        cout<<a<<endl;
        ++a;
        --n;
    }
    return 0;
}