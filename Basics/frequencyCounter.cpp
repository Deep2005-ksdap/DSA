#include<iostream>

int frequency(int num, int arr[]) {
  int lenghtOfArray = sizeof(arr[num])/sizeof(arr[0]);
  do{
    int v1, count = 1;
    for(int i = 0; i < lenghtOfArray; i++){
      v1 = arr[i];
      for(int j = 0; j < lenghtOfArray; j++) {
        if(v1 == arr[j+1]){
          count++;
        }
      }
    }
    int newArr[lenghtOfArray-count] , k = 0;
    for(int i= 0; i < sizeof(newArr)/sizeof(newArr[0]); i++) {
      if(arr[i] != v1) {
        newArr[k] = arr[i];
        k++;
      }
    }
  }while(lenghtOfArray == 0);

}

int main(){
  std::cout << "********* Welcome to FREQUENCY COUNTER program *********\n";
  int number = 0;
  std::cout << "Enter number of digit YOU want to add: ";
  std::cin >> number;
  int arrayOfNumbers[number];

  for(int i = 0; i < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); i++){
    std::cout  << "Enter number " << (i+1) << " out of " << number << " :  ";
    std::cin >> arrayOfNumbers[i];
  }
  
    int n1 = arrayOfNumbers[0];
    int count = 1;
    for(int j = 0; j < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); j++){
      if(n1 == arrayOfNumbers[j+1]){
        count++;
      }
    }

    int newArr[sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]) - count];
    int k = 0;
    for(int i = 0; i < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); i++){
      if(n1 != arrayOfNumbers[i]){
        newArr[k] = arrayOfNumbers[i];
        k++;
      }
    }

    std::cout << n1  << " is :  " << count << std::endl;
    for(int i = 0; i < sizeof(newArr)/sizeof(newArr[0]); i++){
        std::cout << newArr[i] << "\t";
    }

  


  std::cout << "\n********************************************************\n";

  return 0;
}