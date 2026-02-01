#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool isSortedArr(vector<int> &arr, int size);

int main() {
  // vector<int> arr = {2,4,1,333,1,2,334,77,10};
  vector<int> arr = {1,1,1,1,3,2,2,3};
  // int maxValue = arr[0];
  // int secondMax = maxValue;

  // for(int i = 0; i < arr.size() - 1; i++) {
  //   if(arr[i+1] > maxValue){
  //     secondMax = maxValue;
  //     maxValue = arr[i+1];
  //   }
  // }

  // cout << maxValue;
  // cout << endl;
  // cout << secondMax;


  if(isSortedArr(arr, arr.size())){
    cout << "Sorted";
  } else{
    cout << "Not sorted";
  }
  return 0;
}

bool isSortedArr(vector<int> &arr, int size){
  if (size <= 1 ) return true;

  for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-i-1; j++){
      if(arr[j+1] < arr[j]){
        return false;
      }
      else true;
    }
  } 
}