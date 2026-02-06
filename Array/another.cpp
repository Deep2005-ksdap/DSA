#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int maxConsecutive_1sCount(vector<int>& arr);
int countSingleElement(vector<int>& a);

int main(){
 vector<int> arr =  {4,1,2,1,2};
//   int countMaxOnes = maxConsecutive_1sCount(arr);

  cout << endl;
//   cout << countMaxOnes;
    cout << countSingleElement(arr);
  return 0;
}

int countSingleElement(vector<int>& a){
  //BRUTE force approach  
    // for(int i = 0; i < a.size(); i++){
    //     int elem = a[i];
    //     int count = 0;

    //     for(int j = 0; j < a.size(); j++){
    //         if(elem == a[j]){
    //             count++;
    //         }
    //     }

    //     if(count == 1) return elem;
    // }

  //Better approach
  int n = a.size();

    // int maxi = a[0];
    // for(int i = 0; i< n; i++){
    //     maxi = max(a[i], maxi);
    // }

    // vector<int> hash(maxi+1, 0);

    // for(int i  = 0; i < n; i++){
    //     hash[a[i]]++;
    // }

    // for(int i = 0; i < n; i++){
    //     if(hash[a[i]] == 1){
    //         return a[i];
    //     }
    // }
    // return -1;
  
  // OPTIMISED soln
  int xorr = 0;
    for(int i = 0 ; i < n; i++){
        xorr ^= a[i];
    }
    return xorr;
}

int maxConsecutive_1sCount(vector<int>& arr) {
    int count = 0, maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}
