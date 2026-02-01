#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// compile command -> g++ insertionSort.cpp -o insertionSort.exe

void recursiveInsertionSort(vector<int> &arr,int n);

int main() {
  vector<int> v = {44, 67, 33,2,22,31,1};
  int n = v.size();

  for(int it: v) {
    cout << it << "\t";
  }

  cout<< endl;

  //insertion sort 
  // for(int i = 1; i < n; i++){
  //   int key = v[i];
  //   int j = i-1;
    
  //   while(j>= 0 && v[j] > key) {
  //     v[j+1] = v[j];
  //     j--;
  //   }

  //   v[j+1] = key;
  // }

  for(int it: v) {
    cout << it << "\t";
  }
  return 0;
}

void recursiveInsertionSort(vector<int> &arr,int n){
  if (n <= 1)  return;

    // Sort first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert last element at its correct position
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}