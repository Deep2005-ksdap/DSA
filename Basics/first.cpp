#include<iostream>

int main() {

  int marks = 8;
  int total = 10;
  int score = marks/(double) total * 100;

  std::cout << "Score: " << score << std::endl;
  return 0;
}