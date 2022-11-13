// Shell Sort in C++ programming

#include <iostream>
using namespace std;
void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
    int len;
    cout<<"Enter the length of the array : ";
    cin>>len;
    cout<<endl;
    int a[len];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<len;i++)
      cin>>a[i];
    int size = sizeof(a) / sizeof(a[0]);
    shellSort(a, size);
    cout << "Sorted array: \n";
    printArray(a, size);
    cout<<"This program is made by JAYANT SINGH of ECE branch with Scholar No. 21U01041.";
}