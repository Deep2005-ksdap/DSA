#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n);

int main() {
  //An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
  bool isArmstrongNumber = isArmstrong(153);

  cout << isArmstrongNumber;
  return 0;
}

bool isArmstrong(int n){
  const int realNo = n;
  int sum = 0;
 int noOfDigits = 0;
  do{
   noOfDigits++;
    n /= 10;
  }while(n > 0);

  int temp = realNo;
  do{
   int factor = temp % 10;
   sum += pow(factor, noOfDigits);
   temp /= 10;
  }while(temp > 0);

  return sum == realNo;
};
