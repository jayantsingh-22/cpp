#include <iostream>
using namespace std;

class Subarrays
{
	public:
		void printSubarray(int arr[], int start, int last)
		{
			for (int i = start; i < last; ++i)
			{
				cout << " " << arr[i];
			}
			cout << "\n";
		}
	void findSubArray(int arr[], int n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j <= n; ++j)
			{
				this->printSubarray(arr, i, j);
			}
		}
	}
};
int main()
{
	Subarrays *task = new Subarrays();
	int arr1[] = {
		1 , 2 , 3 , 6
	};
	int arr2[] = {
		7 , 8 , 1 , 6 , 4
	};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	task->findSubArray(arr1, n);
	cout << "\n";
	n = sizeof(arr2) / sizeof(arr2[0]);
	task->findSubArray(arr2, n);
	return 0;
}