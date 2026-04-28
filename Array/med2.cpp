#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> twoSumProblem_Brute(vector<int> a, int target);
vector<int> twoSumProblem_Better(vector<int> a, int target);
bool twoSumProblem_Optimal(vector<int> a, int target);

// void sort0s1s2sArray(vector<int>& a);
int majorityElemOptimal(vector<int> v){
  int n = v.size();
  
  int el;
  int cnt = 0;

  for(int i = 0; i < n; i++ ){
    if(cnt == 0){
      el = v[i];
      cnt = 1;
    } else if(el == v[i]){
      cnt++;
    }else {
      cnt--;
    }

    //checking part
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
      if(v[i] == el){
        cnt1++;
      }
    }
    if(cnt1 > n/2){
      return el;
    }
    return -1;

  }
}
int majorityElemBetter(vector<int> v){
  int n = v.size();
  unordered_map<int, int> mp;

  for(int i = 0; i < n; i++){
    mp[v[i]]++;
  }

  for(auto it: mp){
    if(it.second >= n/2){
      return it.first;
    }
  }
  return -1;
}
int majorityElem(vector<int> a){
  int n = a.size();
  
  for(int i = 0; i < n; i++){
    int cnt = 0;

    for(int j = 0; j < n; j++){
      if(a[i] == a[j]){
        cnt++;
      }
    }
    if(cnt > (n /2)){
      return a[i];
    }
  }
  return -1;
}

int main(){
  vector<int> v = {2,6,5,8,11};
  vector<int> v1 = {7, 0, 0, 1, 7, 7, 2, 7, 7};
  int target = 14;
  vector<int> ans = twoSumProblem_Better(v, target);

  cout << majorityElemOptimal(v1);
  // twoSumProblem_Better(v, target) == vector<int>{-1,-1} ? cout << "NO" : cout << "YES" << endl;
  // for(int x : ans) cout << x << " ";
  // cout << endl;
  // twoSumProblem_Optimal(v, target) ? cout << "YES" : cout << "NO" << endl;

  return 0;
}

// void sort0s1s2sArray(vector<int>& a){
//   int n = a.size();
//   //BruteForce approach
//       ordered_map<int, int> mp;
//       for(int i = 0; i < n; i++){
//         mp[a[i]]++;
//       }

//       for(int it = mp.begin(); it < mp.end(); it++){
//         a.push_back(it.push.first)
//       }
// }

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