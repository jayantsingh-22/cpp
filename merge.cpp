#include<iostream>
using namespace std;

void Merge(int *arr1,int l, int *arr2,int s)
{
    int i,j,k;
    i=j=k=0;
    int len = 10;
    int *arr3 = new int[len];
    while(i<l && j<s)
    {
        if(arr1[i] < arr2[j])
        arr3[k++] = arr1[i++];
        else if(arr1[i] == arr2[j])
        {
            arr3[k++] = arr1[i++];
            j++;
            len--;
        }
        else
        arr3[k++] = arr2[j++];
    }
    for(;i<l;i++)
    arr3[k++] = arr1[i];
    for(;j<s;j++)
    arr3[k++] = arr2[j];
    for(int m=0;m<len;m++)
    cout<<arr3[m]<<" ";
}

int main()
{
    int ar1[5] = {2,9,21,28,35};
    int ar2[5] = {2,3,16,18,28};
    Merge(ar1,5,ar2,5);
    return 0;
}