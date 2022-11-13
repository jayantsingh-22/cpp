#include <bits/stdc++.h>
using namespace std;

void insSort(int ar[], int size){
    int i, j, key;
    for (i = 1; i < size; i++){
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key){
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
}

void print(int ar[], int size){
    for (int i = 0; i < size; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main(){
    int len;
    cout << "Enter the length of the array : ";
    cin >> len;
    cout << endl;
    int a[len];
    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < len; i++){
        cin >> a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
    insSort(a, n);
    cout << "The array after insertion sort is :" << endl;
    print(a, n);
    cout << "This program is made by Jayant Singh of ECE branch with Scholar No. 21U01041";
}