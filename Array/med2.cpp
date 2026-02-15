#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> twoSumProblem_Brute(vector<int> a, int target);

int main(){
  vector<int> v = {2,6,5,8,11};
  int target = 14;

  twoSumProblem_Brute(v, target) == vector<int>{-1,-1} ? cout << "NO" : cout << "YES";

  return 0;
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