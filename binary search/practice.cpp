#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

  vector<int> v = {1,10,3,10,2};
  int m = 3;
  int k = 1;

  if(m * k > v.size()) return -1;

  int min = *min_element(v.begin(), v.end());
  int max = *max_element(v.begin(), v.end());

  int b = 0;

  for(int i = min; i <= max; i++){
    int cnt = 0;
    for(int j = 0; j < v.size(); j++){
      if(i < v[j]) {
        if(cnt){
          b = cnt/k;
        }
        cnt = 0;
      }
      else cnt++;
    }
  
  }

  return 0;
}