#include<iostream>                                       

void printArray(int arr[], int size) {
  std::cout << "\nArray get by the user\n";
  for(int i = 0; i < size; i++) {
    std::cout << arr[i] << "\t";
  }
  std::cout << "\n Programm Exitted \n";

}
void takeArray() {
  int arrSize;
  std::cout << "Enter no. of item in the Array\t";
  std::cin >> arrSize;

  int array[arrSize];
  const int size = sizeof(array)/sizeof(array[0]);
  do{
    for(int i = 0; i < size; i++) {
    std::cout << "Enter " << i+1 << "Element of Array\t";
    std::cin >> array[i];
  }
  }while(size == 0 );
  
  printArray(array, size);
}
int main() {

  // std::string name = "Deepanshu kumar" ; // string is reference data type
  // std::cout << sizeof(name) << "bytes\n";

  // std::string students[] = {"spongebob", "Patrick", "Squidward"};

  // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++ ) {
  //   std::cout << students[i] << "\n";
  // }

  // int grades[] = {78, 67, 98, 87} ;
  // for(int grade : grades) {         //for Each loop
  //   std::cout << grade << "\n";
  // }

 takeArray();
  return 0;
}
