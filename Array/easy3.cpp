#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

// can handle both sorted and unsorted cz set is there
void findUnion(vector<int> &a1, vector<int> &a2);
// require the array to be sorted first than will be better for union
vector<int> findUnionOptimised(vector<int> &a1, vector<int> &a2);


void findIntersectionBruteApproach(vector<int>& a1, vector<int>& a2);
void findIntersectionOpt(vector<int>& a1, vector<int>& a2);

int findUnknowNumber(vector<int> arr, int n);

int main() {
  vector<int> v1 = {1,1,1,2,2,3,4};
  vector<int> v2 = {1,2,2,2,4,6,10,11};
  vector<int> v3 = {1,5,4,3};
  int numbers = 5;

  // findUnion(v1,v2);
  // vector<int> ans = findUnionOptimised(v1, v2);

  // cout << endl;
  // for(int it: ans){
  //   cout << it << "\t";
  // }

  // cout<< endl;
  // findIntersectionOpt(v1, v2);
  cout << findUnknowNumber(v3, numbers);
  return 0;
}

int findUnknowNumber(vector<int> arr, int n){
  // brute force
    // for(int i = 0; i< n; i++){
    //   int flag = 0;
    //   for(int j = 0; j < n-1; j++){
    //     if(arr[j] == i){
    //       flag = 1;
    //       break;
    //     }
    //   }
    //   if(flag == 0) return i;
    // }

  // better approach
    // vector<int> vis(0, n);

    // for(int i = 0; i < n; i++){
    //    vis[arr[i]] = 1;
    // }

    // for(int i = 1; i < n; i++){
    //    if(vis[i] == 0) return i;
    // }

  // optimal-1: using sum method
    int sum = n * (n + 1) / 2;
    int sumOfArr = 0;
    for(int i = 0; i< n-1; i++){
      sumOfArr += arr[i];
    }
    
    return sum - sumOfArr;
  
  // optimal-2: xor method
    // int xor1 = 0, xor2 = 0;

    // for(int i = 1; i <= n; i++){
    //   xor1 ^= i;
    // }
    // for(int i = 0; i < n-1; i++){
    //   xor2 ^= arr[i];
    // }

    // return xor1 ^ xor2; 
}

void findIntersectionOpt(vector<int>& a1, vector<int>& a2){
  int n1 = a1.size();
  int n2 = a2.size();
  vector<int> ans;
  int i = 0;
  int j = 0;

  while(i < n1 && j < n2){
    if(a1[i] > a2[j]){
      j++;
    }else if(a1[i] < a2[j]){
      i++;
    }else{
      ans.push_back(a1[i]);
      i++;
      j++;
    }
  }

  for(int it: ans){
    cout << it << "\t";
  }
}

void findIntersectionBruteApproach(vector<int>& a1, vector<int>& a2){
  int n1 = a1.size();
  int n2 = a2.size();
  vector<int> visited(0, n2);
  vector<int> intersectionAns;
  
  for(int i = 0; i < n1; i++){
    for(int j = 0; j < n2; j++){
      if(a1[i] == a2[j] && visited[j] == 0){
        intersectionAns.push_back(a1[i]);
        visited[j] = 1;
        break;
      }
    }
  }

  for(int it:intersectionAns){
    cout << it << "\t";
  }
}

vector<int> findUnionOptimised(vector<int> &a1, vector<int> &a2){
  int n1= a1.size();
  int n2= a2.size();
  vector<int> result;
  int i = 0;
  int j = 0;
  
  while(i < n1 && j < n2){
    if(a1[i] <= a2[j]){
      if(result.empty() || result.back() != a1[i]){
        result.push_back(a1[i]);
      }
      i++;
    }else{
      if(result.empty() || result.back() != a2[j]){
        result.push_back(a2[j]);
      }
      j++;
    }
  }

  while(i < n1){
    if(result.empty() || result.back() != a1[i]){
        result.push_back(a1[i]);
      }
    i++;
  }
  while(j < n2){
    if(result.empty() || result.back() != a2[j]){
        result.push_back(a2[j]);
      }
    j++;
  }
  return result;
}

// Brute force approach
void findUnion(vector<int> &a1, vector<int> &a2){
  int n1= a1.size();
  int n2= a2.size();
  set<int> st;

  for(int i = 0; i < n1; i++){
    st.insert(a1[i]);
  }
  for(int i = 0; i < n2; i++){
    st.insert(a2[i]);
  }

  for(int it: st){
    cout << it << "\t";
  }
 
}