#include<iostream>

void iterationWalk(int steps);
void recursionWalk(int steps);

int iterationFactorial(int number);
int recursionFactorial(int number);

int main() {
 int factNum = 4;
 int ans;

//  ans =  iterationFactorial(factNum);
 ans =  recursionFactorial(factNum);

 std::cout << "factorial of " << factNum << " = " << ans;


//  iterationWalk(3);
//  recursionWalk(4);

  return 0;
}

void iterationWalk(int steps){
  for(int i = 0; i < steps; i++) {
    std::cout << "step: " << i+1 << "\n";
  }
}
void recursionWalk(int steps) {
  if(steps > 0) {
    std::cout << "You took a recursive Step\n";
    recursionWalk(steps-1);
  }
}

int iterationFactorial(int number){
  int answer = 1;
  for(int i = number; i > 1; i--){
    std::cout << i << "\n";
    answer *= i;
  }
 return answer;
}
int recursionFactorial(int number){
  if(number > 1){
    return number*recursionFactorial(number-1);
  } 
  else {
    return 1;
  }
}
