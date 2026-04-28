#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Union {
  public:
    vector<int> unionOfArr(vector<int> & a1, vector<int>& a2){
      int n1 = a1.size();
      int n2 = a2.size();
      vector<int> ans;

      for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
          if(a1[i] == a2[j]){
            ans.push_back(a1[i]);
            break;
          }
        }
      }
      return ans;
    }

    vector<int> unionOfArr_Better(vector<int> & a1, vector<int>& a2){
      int n1 = a1.size();
      int n2 = a2.size();
      
      
    }

}; 

int main(){
  vector<int> v1 = {1,2,3,4,5};
  vector<int> v2 = {2,3,4,4,5,11,12};

  Union soln;
  vector<int> val = soln.unionOfArr(v1, v2);

  for(int it: val){
    cout << it << endl;
  }
  return 0;
}
