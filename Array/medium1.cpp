#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int subArrayWithSumK_Brute(vector<int> arr, int k);
int subArrayWithSumK_Optimal(vector<int> arr, int k);

int main(){
  // samples:  nums = [10, 5, 2, 7, 1, 9], k = 15  
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 15;

  cout << subArrayWithSumK_Brute(arr, k) << endl;
  cout << subArrayWithSumK_Optimal(arr, k);
  return 0;
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