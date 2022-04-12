#include<iostream>
using namespace std;

int main()
{
    int t,r,c;
    cin>>t;
    int ar[t][2];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(int k=0;k<t;k++)
    {
        cout<<"Case #"<<k+1<<":"<<endl;
         for(int i=1;i<=(2*ar[k][0]+1);i++)
        {
        for(int j=1;j<=(2*ar[k][1]+1);j++)
        {
            if(i<=2 && j<=2)
            cout<<".";
            if(i%2!=0 && j>2)
            {
                if(j%2!=0)
                cout<<"+";
                else 
                cout<<"-";
            }
            if(i%2==0 && j>2)
            {
                if(j%2!=0)
                cout<<"|";
                else 
                cout<<".";
            }
            if(i>=3 && j<=2) 
            {
                if(i%2!=0 && j%2!=0)
                cout<<"+";
                else if(i%2!=0 && j%2==0)
                cout<<"-";
                else if(i%2==0 && j%2!=0)
                cout<<"|";
                else if(i%2==0 && j%2==0)
                cout<<".";

            }
        }
        cout<<"\n";
    }
}
cout<<"\n";
}