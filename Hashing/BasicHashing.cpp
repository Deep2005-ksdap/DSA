#include<bits/stdc++.h>
using namespace std;

void frequency(int n, int arr[]);
void maxFrequency(int n, int arr[]);

int main() {
  int arr[] = {0, 5, 10, 10, 10, 5, 2 ,2, 1, 2,3};
  int size = sizeof(arr) / sizeof(arr[0]);

  // frequency(size, arr);
  maxFrequency(size, arr);

  return 0;
}

void maxFrequency(int n, int arr[]){
  unordered_map<int ,int> map;
  int maxElement = 0; int minElement = 0;
  int maxFreq = 0; int minFreq = n;

  for(int i = 0; i < n ; i++) {
    map[arr[i]]++;
  }

  for(auto it: map) {
    int element = it.first;
    int count = it.second;

    if(count > maxFreq) {
      maxFreq = count;
      maxElement = element;
    }
    if(count < minFreq) {
      minFreq = count;
      minElement = element;
    }

  }
  cout << "The highest frequency element is: " << maxElement << " with Frequency " << maxFreq << "\n";
  cout << "The lowest frequency element is: " << minElement << " with Frequency " << minFreq << "\n";
}

void frequency(int n, int arr[]){
  unordered_map<int, int> map;

  for(int i =0 ; i < n; i++){
    map[arr[i]]++;
  }

  for(auto it: map){
    cout << it.first << " " << it.second << endl;
  }
}