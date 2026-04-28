#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;
vector<int> better(vector<int>& nums){
  int n = nums.size();
  unordered_map<int, int> temp;
  int repeat = -1, missing = -1;

  int hash[n + 1] = {0};

  for(int i = 0; i < n; i++){
    temp[nums[i]]++;
  }

  for(int i = 1 ;i <= n; i++){
    if(temp[i] == 0){
      missing = i;
    }else if(temp[i] == 2){
      repeat = i;
    }

    if(repeat!= -1 && missing != -1) break;
  }

  return {repeat, missing};
}
vector<int> brute(vector<int> & nums){
  int n = nums.size();
  int repeating = -1 , mising =  -1;


  for(int i = 1; i <= n; i++){
    int count = 0;

    for(int j = 0; j < n; j++){
      if(nums[j] == i) count++;
    }

    if(count == 2) repeating = i;
    if(count == 0) mising =  i;

    if(repeating != -1 && mising != -1){
      break;
    }
  }
  return {repeating, mising};
}

int main(){
  vector<int> nums = {3, 5, 4, 1, 1};

  for(auto it: brute(nums)){
    cout << it << endl;
  }
  for(auto it: better(nums)){
    cout << it << endl;
  }

  return 0;
}