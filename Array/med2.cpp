#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> twoSumProblem_Brute(vector<int> a, int target);
vector<int> twoSumProblem_Better(vector<int> a, int target);
bool twoSumProblem_Optimal(vector<int> a, int target);

int main(){
  vector<int> v = {2,6,5,8,11};
  int target = 14;
  vector<int> ans = twoSumProblem_Better(v, target);

  twoSumProblem_Better(v, target) == vector<int>{-1,-1} ? cout << "NO" : cout << "YES" << endl;
  for(int x : ans) cout << x << " ";
  cout << endl;
  twoSumProblem_Optimal(v, target) ? cout << "YES" : cout << "NO" << endl;

  return 0;
}
bool twoSumProblem_Optimal(vector<int> a, int target){
  int n = a.size();
  vector<pair<int, int>> arrWithIndices;

  for(int i = 0; i < n; i++){
    arrWithIndices.push_back({a[i], i});
  }

  sort(arrWithIndices.begin(), arrWithIndices.end());

  int left = 0, right = n -1 ;
  while(left < right){
    int sum = arrWithIndices[left].first + arrWithIndices[right].first;
    if(sum == target){
      return true;
    }else if(sum < target){
      left++;
    }else if(sum > target){
      right--;
    }
  }
  
  return false;
}

vector<int> twoSumProblem_Better(vector<int> a, int target){
  unordered_map<int, int> mp;
  int n = a.size();

  for(int i = 0; i < n; i++){
    int diff = target - a[i];

    if(mp.find(diff) != mp.end()){
      return {mp[diff], i};
    }
    mp[a[i]] = i;
  }

  return {-1, 1};
}

vector<int> twoSumProblem_Brute(vector<int> a, int target){
  int n = a.size();

  for(int i = 0; i < n-1; i++){
    for(int j = i + 1; j < n; j++){
      if(a[i] + a[j] == target){
        return {i, j};
      }
    }
  }
  return {-1,-1};
}