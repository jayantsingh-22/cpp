#include <iostream>
using namespace std;
int main()
{
    int n,q,m,k=0,r,c;
    cin>>n>>q;
    cin>>m;
    int ar[n][m];
    for(int i=0;i<m;++i,++k)
    {
        cin>>ar[k][i];
    }
    for(int i=0;i<q;++i)
    {
        cin>>r>>c; 
        cout<<ar[r][c]<<endl;
    }
    return 0;
}            