//Google code jam'22 qualification round Q1-Punched cards.
#include<iostream>
using namespace std;

int main()
{
    int t,r,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r>>c; 
        cout<<"Case #"<<i<<endl;
        for(int j=0;j<2*r+1;j++)
        {
            for(int k=0;k<2*c+1;k++)
            {
                if(k<2 && j<2)
                cout<<".";
                else if(j%2!=0 && k%2!=0)
                cout<<".";
                else if(j%2==0 && k%2==0)
                cout<<"+";
                else if(j%2==0 && k%2!=0)
                cout<<"-";
                else if(j%2!=0 && k%2==0)
                cout<<"|";
            }
            cout<<"\n";
        }
    }
}