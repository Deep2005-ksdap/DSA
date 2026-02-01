#include<bits/stdc++.h>
using namespace std;

// compile command -> g++ insertion.cpp -o insertion.exe

int main() {
  vector<int> arr = {2, 3,32,11,0,11};
  int n = arr.size();

  for(int it: arr) {
    cout << it <<  "\t";
  }
  cout << endl;
  
  //selection sort
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }
    swap(arr[i], arr[minIndex]);
}

  for(int it: arr) {
    cout << it <<  "\t";
  }
  

  return 0;
}