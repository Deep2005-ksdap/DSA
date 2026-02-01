#include<iostream>

int main() {
  int arr[] = {45,3,56,33,44};
  // int arr[] = {3,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  int temp ;
  int loopcount = 0;
  for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-i-1; j++) {
        if(arr[j] > arr[j+1]){
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
        loopcount++;
      }
  } 
  std::cout << "size of Array is: " << size << "\n";
  for(int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n" << "Inner loop count " <<  loopcount << "\n";

  return 0;
}