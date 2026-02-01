#include<iostream>
#include<vector>

using namespace std;


// maximum subarray problem and kaldal's
// int main(){
//   // maximum subarray sum: kaldal's algorithm
//   vector<int> vec = {-1, 2, -2, 3, -3, 4,5};

//   // printing all subarray time com: O(n^3)
//   for(int start = 0; start < vec.size(); start++){
//     for(int end = start; end < vec.size(); end++){
//       for(int i = start; i <  end; i++){
//         cout << vec[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }

//   // kaldal's algo
//   int realMaxValue = INT8_MIN;
//   int currMax = 0;
//   for(int start = 0; start < vec.size(); start++){
//     currMax += vec.at(start);
//     realMaxValue = max(realMaxValue, currMax);

//     if(currMax < 0) {
//       currMax = 0;
//     }
//   }

//   cout << realMaxValue << endl;

//   return 0;
// }

//pair sum problem
void main(){
  vector<int> vec = {2, 7 , 11 , 22, 33}; //sorted array -> using 2 pointer appraoch
  int targetSum = 9;
  //brute force approach 
  int i = 0 ; int j = vec.size()-1;
    while(i < j){
        int pairSum = vec[i] + vec[j];
        if(pairSum > targetSum){
            j--;
        } else if( pairSum < targetSum ){
            i++;
        } else {
            vec.push_back(i);
            vec.push_back(j);

        }
    }
}