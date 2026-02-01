#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void mergeSort(vector<int> &arr, int low, int high);
void merge(vector<int> &arr, int low, int mid, int high);

int main() {
  vector<int> arr = {23, 12, 4, 12, 4, 2, 43, 2, 9, 10};
  int size = arr.size();

  for(int it: arr) {
    cout << it << "\t";
  }
  cout <<endl;

  mergeSort(arr, 0, size-1);

  for(int it: arr) {
    cout << it << "\t";
  }
  return 0;
}

void mergeSort(vector<int> &arr, int low, int high){
  if (low >= high) return;
  int mid =(  low + high ) / 2;

  mergeSort(arr, low, mid);
  mergeSort(arr, mid+1, high);
  merge(arr, low, mid, high);
}

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
   int leftPtr = low;
   int rightPtr = mid+1;

   // compare the element and move the pointer
   while(leftPtr <= mid && rightPtr <= high){
    if(arr[leftPtr] <= arr[rightPtr]){
      temp.push_back(arr[leftPtr]);
      leftPtr++;
    }
    else {
      temp.push_back(arr[rightPtr]);
      rightPtr++;
    }
   }

   // rest element of left arr
   while (leftPtr <= mid){
     temp.push_back(arr[leftPtr]);
      leftPtr++;
   }

   // rest element of Right arr
   while(rightPtr <= high) {
    temp.push_back(arr[rightPtr]);
    rightPtr++;
   }

   for(int i = low; i <= high; i++) {
      arr[i] = temp[i-low];
   }
}
