#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// k is positive only
int subArrayWithSumK_Brute(vector<int> arr, int k);
int subArrayWithSumK_Optimal(vector<int> arr, int k);

// make the sum 0 for longest subarray
int subArrayWithSumZero_Brute(vector<int> arr);
int subArrayWithSumZero_Optimal(vector<int> arr);

int main(){
  // samples:  nums = [10, 5, 2, 7, 1, 9], k = 15  
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  vector<int> newArr = {6, -2, 2, -8, 1, 7, 4, -10};
  int k = 15;

  cout << subArrayWithSumZero_Brute(newArr) << endl;
  cout << subArrayWithSumZero_Optimal(newArr) << endl;
  cout << subArrayWithSumK_Brute(arr, k) << endl;
  cout << subArrayWithSumK_Optimal(arr, k);
  return 0;
}

int subArrayWithSumZero_Optimal(vector<int> arr){
  int n = arr.size();

  int left = 0, right = 0;
  int maxLength = 0;
  int sum = arr[left];

  while(right < n){
    while(left <= right && sum > 0){
      sum -= arr[left];
      left++;
    }

    if(sum == 0){
      maxLength = max(maxLength, right - left + 1);
    }

    right++;
    if(sum < 0) sum += arr[right];
  }

  return maxLength;
}

int subArrayWithSumZero_Brute(vector<int> arr){
  int n = arr.size();
  int maxArrLength = 0;

  for(int st = 0; st < n; st++){
    for(int end = 0; end < n; end++){
      int sum = 0;

      for(int i = st; i < end + 1; i++){
        sum += arr[i];
      }

      if(sum == 0){
        maxArrLength = max(maxArrLength, end - st + 1);
      }
    }
  }
  return maxArrLength;
}

int subArrayWithSumK_Optimal(vector<int> arr, int k){
   // sliding windows concept
   int n = arr.size();
   
   int start = 0, end = 0;
   int arrlength = 0;
   int sum = arr[0];
   
   while(end < n){

    while(start <= end && sum > k){
      sum -= arr[start];
      start++;
    }

    if(sum == k){
      arrlength = max(arrlength, end - start + 1);
    }

    end++;
    if(end < n) sum += arr[end];
   }

   return arrlength;
}

int subArrayWithSumK_Brute(vector<int> arr, int k){
  int n = arr.size();
  int maxLength = 0;

  for(int starti = 0; starti < n; starti++){
    for(int endi = starti; endi < n; endi++){
      int sum = 0;
      for(int i = starti; i < endi + 1; i++){
        sum += arr[i];
      }

      if(sum == k){
        maxLength = max(maxLength, endi - starti + 1);
      }
    }
  }

  return maxLength;
}