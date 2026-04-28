#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int lowerbound(vector<int> a, int t){
  int n = a.size();
  int l = 0, r = n - 1;

  while(l <= r){
    int mid = l + (r - l) /2;

    if(a[mid] >= t) return mid;
  }
}

int main(){

  return 0;
}