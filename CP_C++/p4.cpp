//Google code jam'22 qualification round Q2-3D Printing.
#include<iostream>
using namespace std;
int i,j,t,temp;
int MIN(int a,int b,int c)
{
  int min=(a>b) ? b:a;
  return (min>c) ? c:min;
}

int main()
{
  int testc=1,test;
    scanf("%d",&test);
  while(testc<=test)
  {
    int arrout[4]={0,0,0,0},sum=1000000,arr[3][4];
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
    i=0;
    while(sum!=0 && i<4)
    {
      t=MIN(arr[0][i],arr[1][i],arr[2][i]);
      if(t>=1000000)
        t=1000000;
      if(sum<=t)
        t=sum;
      sum-=t;
      arrout[i]=t;
      i++;
    }
    printf("Case #%d: ",testc);
    if(sum==0)
    {
     for(i=0;i<4;i++)
     {
     printf("%d ",arrout[i]);
}
    }
    else
    {
      printf("IMPOSSIBLE");
    }
    printf("\n");
    testc++;
}
return 0;
}