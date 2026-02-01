#include<iostream>

int main() {
  int *pointer = nullptr;
  int x = 23;

  pointer = &x;
  if(pointer == nullptr){
    std::cout << "address not assigned yet!";
  }else {
    std::cout << "address has been assigned!";
    std::cout << *pointer;
    
  }
  return 0;
}