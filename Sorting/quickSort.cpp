#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void qs(vector<int> &arr, int low, int high);
int partitionFunc(vector<int> &arr, int low, int high);

int main() {
  vector<int> v = {23, 12, 4, 12, 4, 2, 43, 2, 9, 10};
  int n = v.size();

  for(int it: v){
    cout << it << "\t";
  }

  cout << endl;
  qs(v, 0, n-1);

  for(int it: v){
    cout << it << "\t";
  }
  return 0;
}

void qs(vector<int> &arr, int low, int high){
  if(low < high) {
    int partitionIndex = partitionFunc(arr, low, high);
    qs(arr, low, partitionIndex-1);
    qs(arr, partitionIndex + 1, high);
  }
}

int partitionFunc(vector<int> &arr, int low, int high){
  int pivotElem = arr[low];
  int i = low;
  int j = high;

  while(i < j) {
    while(arr[i] <= pivotElem && i <= high-1){
      i++;
    }
    while(arr[j] > pivotElem && j >= low+1){
      j--;
    }
    if(i < j) swap(arr[i],arr[j]);
  }

  swap(arr[low], arr[j]);
  return j;
}