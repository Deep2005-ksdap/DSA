#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void recursiveBubbleSort(vector<int> &arr, int n);

int main() {
  vector<int> v = {44, 67, 33,2,22,31,1};
  int n = v.size();

  for(int it: v) {
    cout << it << "\t";
  }

  cout << endl;

  // brutal force approach
  // for(int i = 0; i < n-1; i++) {
  //   for (int j = 0; j < n-i-1; j++){
  //     if( v[j] > v[j+1]){
  //       swap(v[j], v[j+1]);
  //     }
  //   }
  // }

  recursiveBubbleSort(v, n);

  for(int it: v) {
    cout << it << "\t";
  }

  return 0;
}

void recursiveBubbleSort(vector<int> &arr, int n){
  if(n == 1) return;

  for(int i = 0; i < n-1; i++){
    if(arr[i] > arr[i+1]){
      swap(arr[i], arr[i+1]);
    }
  }

  recursiveBubbleSort(arr, n-1);
}