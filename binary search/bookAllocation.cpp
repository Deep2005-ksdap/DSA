#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class paintersProblem{
  public:
    int sol(vector<int>& arr, int k){
      int n = arr.size();

      int i = *max_element(arr.begin(), arr.end());
      int j = 0;
      for(auto it: arr){
        j += it;
      }

      int ans = 0;
      while(i <= j){
        int mid = i + (j - i)/2;

        if(isTimeAllowed(arr, mid, k)){
           ans = mid;
           j = mid - 1;
        }else{
          i = mid + 1;
        }
      }
      return ans;
    }

    bool isTimeAllowed(vector<int>& arr, int t, int k){
      int timeTaken = arr[0];
      int painterCount = 1;

      for(int i = 1; i < arr.size(); i++){
        if(timeTaken + arr[i] <= t){
          timeTaken += arr[i];
        }else{
          timeTaken = arr[i];
          painterCount++;
        }

        if(painterCount > k) return false;
      }

      return true;
    }
};

int solution(vector<int>& arr, int m){
  int n = arr.size();
  int ans = -1;

  if(m > n) return -1;

  int low = *max_element(arr.begin(), arr.end()); //:. atleast one student has to keep the max size book
  int high = 0;
  for(auto it: arr){
    high += it;
  }

  while(low <= high){
    int mid = low + (high - low)/2;

    if(isBookCanAllocate(arr, mid, m)){
      ans = mid;
      high = mid - 1;
    }else low = mid + 1;
  }

  return ans;
}

bool isBookCanAllocate(vector<int>& v, int num, int m){
  int studentCount = 1;
  int bookAll = v[0];

  for(int i = 1; i < v.size(); i++){
    if(v[i] + bookAll > num){
      bookAll = v[i];
      studentCount++;
    }else{
      bookAll += v[i];
    }
    if(studentCount > m) return false;
  }
  
  // if(studentCount < m) return false; // this condition should not be here

  return true;
}

int main(){
  vector<int> arr = {12, 34, 67, 90};
  int m = 2;




  return 0;
}