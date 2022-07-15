#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[],int x,int low, int high)
{
  if(low<=high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binSearch(arr, x, low, mid - 1);

    return binSearch(arr, x, mid + 1, high);
  }

  return -1;
}

int main()
{
  int len,ele;
  cout<<"Enter the length of the array : ";
  cin>>len;
  int a[len];
  cout<<"\nEnter the elements of the array in sorted order: "<<endl;
  for(int i=0;i<len;i++)
    cin>>a[i];
  int size = sizeof(a)/sizeof(a[0]);
cout<<"\nEnter the element to be searched : ";
  cin>>ele;
  
  
  int result = binSearch(a,ele,0,size-1);
  if(result == -1)
    cout<<"\nElement not found."<<endl;
  else
    cout<<"Element is present at index "<<result<<endl;
  cout<<"This program is made by JAYANT SINGH with Scholar No. 21U01041."<<endl;

  return 0;
}