#include<iostream>

int main() {
  char operation;
  double num1;
  double num2;
  double result;

  std::cout << "****** Arithmatic Calculator *******\n\n";
  std::cout << "valid operations are: '+', '-', '*', '/' \n";

  do{
    std::cout << "Enter Operation: ";
    std::cin >> operation;
} while (operation != '+' && operation != '-' && operation != '*' && operation != '/');
  

  std::cout << "Enter first Number: \n";
  std::cin >> num1;
  
  std::cout << "Enter second Number: \n";
  std::cin >> num2;

  switch (operation){
  case '+':
    result = num1 + num2;
    std::cout << num1 << " + " << num2 << " :" << result <<  std::endl;
    break;
  case '-':
    result = num1 - num2;
    std::cout << num1 <<  " - "  << num2 << " = " << result <<  std::endl;
    break;
  case '*':
    result = num1 * num2;
    std::cout << num1 << " x " << num2 << " = " << result <<  std::endl;
    break;
  case '/':
    result = num1 / num2;
    std::cout << num1 << " / " << num2 << " = " << result << std::endl;
    break;

  default:
    std::cout << "Invalid operation selected, choose only (+ - * /)\n";
    break;
  }
  std::cout << "***************************\n";
  return 0;
}
