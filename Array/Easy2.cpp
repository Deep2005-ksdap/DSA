#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void removeDuplicate(vector<int>& arr);
void twoPointerTechForDuplicate(vector<int>& arr);

void leftRotByOne(vector<int>& arr);
void RotateRightByK(vector<int>& arr, int k);

void moveZeroToEnd(vector<int> &arr , int n);
void moveZeroToEnd2(vector<int> &arr , int n);

int linearSearch(vector<int> &arr, int num);

int main () {
  vector<int> arr1 = {1,1,2,2,2,3,3};
  vector<int> arr2 = {5,1,2,3,4};
  vector<int> arr3 = {5,0,0,3,4};

  // removeDuplicate(arr);
  // twoPointerTechForDuplicate(arr1);
  // cout << endl;
  // leftRotByOne(arr2);
  // cout << endl;
  // RotateRightByK(arr2, 3);
  // moveZeroToEnd2(arr3, 5);

  cout << endl << linearSearch(arr2, 0);
  return 0;
}

int linearSearch(vector<int> &arr, int num){
  for(int i = 0; i < arr.size(); i++){
    if(num == arr[i]){
      return i;
    }
  }
  return -1;
}

void moveZeroToEnd2(vector<int> &arr , int n){
  int j = -1;

  for(int i = 0; i< arr.size(); i++){
    if(arr[i] == 0){
      j = i;
      break;
    }
  }
  if(j == -1) return;

  for(int i = j + 1; i < arr.size(); i++){
    if(arr[i] != 0){
      swap(arr[i], arr[j]);
      j++;
    }
  }

  for(int it: arr){
    cout << it << "\t";
  }
}
void moveZeroToEnd(vector<int> &arr , int n){
  // brutal force
  vector<int> temp;
  int counter = 0;
  for (int i = 0; i < n; i++){
    if(arr[i] != 0) {
      temp.push_back(arr[i]);
      counter++;
    }
  }
  for(int i = 0; i < n-counter; i++){
    temp.push_back(0);
  }
  
  for(int it: temp){
    cout << it << "\t";
  }
}

void RotateRightByK(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // handle k > n

    vector<int> temp;

    // store last k elements
    for(int i = n - k; i < n; i++) {
        temp.push_back(arr[i]);
    }

    // shift remaining elements to right
    for(int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // copy temp back
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // print
    for(int it : arr) {
        cout << it << "\t";
    }
}


void leftRotByOne(vector<int>& arr){
  if(arr.size() <= 1) return ;

  int key = arr[0];
  int j = 1;

  for(int i =0; i < arr.size() -1; i++) {
    arr[i] = arr[j];
    j++;
  }
  arr[arr.size()-1] = key;

  for(int it: arr) {
    cout << it << "\t";
  }
}

// more optimized : two pointer approach 
void twoPointerTechForDuplicate(vector<int>& arr){
  if(arr.size() <= 1) return ;

  int j = 0;

  for(int i = 0; i < arr.size(); i++){
    if(arr[i] != arr[j]){
      j++;
      arr[j] = arr[i];
    }
  }

  for(int i = 0; i <= j; i++) {
        cout << arr[i] << "\t";
  }
}

// time: O(n), space: O(n)
void removeDuplicate(vector<int>& arr){
  vector<int> temp;
  int size = arr.size();
  if(size <= 1) {
    cout << "single or less than one element ";
  }

  int key = arr[0];
  temp.push_back(key);

  for(int i = 0; i < size-1; i++){
    if(key != arr[i+1]){
      key = arr[i+1];
      temp.push_back(key);
    }
  }

  for(int it: temp){
    cout << it << "\t";
  }
}
