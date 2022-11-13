#include<iostream>
using namespace std;

void insert(char a[],char m,int pos,int s)
{
    if(pos<0 || pos>=s)
    cout<<"Invalid Index."<<endl;
    for(int i=0;i<s;++i)
    {
        if(i==pos)
        a[i] = m;
        else
        a[i] = '0';   //initialized all other elements to 0 for clarity.
    }
    for(int i=0;i<s;++i)
    cout<<a[i]<<" ";
    cout<<endl;
}

void deletion(char a[],int pos,int s)
{
     if(pos<0 || pos>=s)
    cout<<"Invalid Index."<<endl;
    for(int i=0;i<s;++i)
    {
        if(i==pos)
        a[i] = '\0';
    }
    for(int i=0;i<s;++i)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int i,n,index,index2;
    cout<<"Enter the total number of elements for the array : ";
    cin>>n;
    cout<<"\n";
    char arr[n] = {0};      //created an empty list
    char ch,ch2;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element and its index to be inserted : ";
    cin>>ch>>index;
    insert(arr,ch,index,size);  //performing insertion
    cout<<"Enter the index of the element to be deleted : ";
    cin>>index2;
    deletion(arr,index2,size); //performing deletion
    cout<<"This program is made by Jayant Singh,ECE Branch with Scholar No. 21U01041."<<endl;
    return 0;
}
