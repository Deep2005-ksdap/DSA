#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool canCowPlaced(vector<int>& a, int gap, int cows){
  int cow = 1, placed = a[0];
  
  for(int i = 1; i < a.size(); i++){
    if(a[i] - placed >= gap){
      cow++;
      placed = a[i];
    }
    if(cow >= cows) return true;
  }
  return false;
}


int main(){
  vector<int> arr = {0,3,4,7,10,9};
  int k = 4;

  int max = *max_element(arr.begin(), arr.end());
  int min = *min_element(arr.begin(), arr.end());
  int maxGap = max - min;

  sort(arr.begin(), arr.end());
  
  int low = 1, high = maxGap;
  int ans = 1;
  while(low <= high){
    int mid = low + (high - low)/2;

    if(canCowPlaced(arr,mid,k)){
      ans = mid;
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }

  return 0;
}