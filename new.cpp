#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements for the array : ";
	cin>>n;
	char arr[n] = {'0'};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
    cout<<endl;
	cout<<"This program is made by Jayant Singh,ECE Branch with Scholar No. 21U01041."<<endl;
	return 0;
}