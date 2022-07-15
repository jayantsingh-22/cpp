#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high)
{
    int pivot =  array[high];
    int i = low-1;
    for(int j=low;j<high;j++)
    {`
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[high]);
    return(i+1);
}

void quicksort(int array[],int low,int high)
{
    if(low<high)
    {
        int pvt = partition(array,low,high);
        quicksort(array,low,pvt-1);
        quicksort(array,pvt+1,high);
    }
}

void printArray(int array[],int s)
{
    int i;
  for (i = 0; i < s; i++)
    cout << array[i] << " ";
  cout << endl;
}
int main() 
{
    int len;
  cout<<"Enter length of array : ";
  cin>>len;
  int a[len];
  for(int i=0;i<len;i++)
    cin>>a[i];
  int size = sizeof(a)/sizeof(a[0]);
  quicksort(a,0,size-1);
  cout<<"After sorting, the array is :\n";
  printArray(a,size);
  cout<<"\nThis program is made by JAYANT SINGH of ECE branch with Scholar No. 21U01041.";
    return 0;
}