#include<iostream>
using namespace std;

int main() {
  // first pattern
  // for(int i = 0; i <5; i++) {
  //   for(int j = 0; j < 5; j++) {
  //     cout << '*';
      
  //   }
  //   cout<< '\n';
  // }

  //2nd pattern
  // for(int i = 0; i <5; i++) {
  //   for(int j = 0; j < i+1; j++) {
  //     cout << '*';
      
  //   }
  //   cout<< '\n';
  // }

  //3rd pattern
  // for(int i = 0; i <5; i++) {
  //   for(int j = 0; j < i+1; j++) {
  //     cout << j+1;
      
  //   }
  //   cout<< '\n';
  // }

  //4th pattern
  // for(int i = 0; i <5; i++) {
  //   for(int j = 0; j < i+1; j++) {
  //     cout << i+1;
      
  //   }
  //   cout<< '\n';
  // }

  //5th pattern
  // for(int i = 0; i <5; i++) {
  //   for(int j = 5; j > i; j--) {
  //     cout << '#';
  //   }
  //   cout<< '\n';
  // }

  //6th pattern
  // for(int i = 0; i < 5; i++) {
  //   for(int j = 5; j > i; j--){
  //     cout << 6-j;
  //   }
  //   cout<< '\n';
  // }

  //7th pattern - equlateral traingle
  //  for (int i = 1; i <= n; i++) {
  //       // spaces
  //       for (int s = 1; s <= n-i; s++) {
  //           cout << " ";
  //       }
  //       // stars
  //       for (int star = 1; star <= 2*i-1; star++) {
  //           cout << "*";
  //       }
  //       cout << endl;
  //   }

  // 8th pattern -inverted equilateral traingle
  // int n = 7;
  
  // for(int i = 1; i <= n; i++){
  //   for(int sp = 0; sp < i; sp++){
  //     cout << " ";
  //   }
  //   for(int star = 0; star < 2 * (n-i) - 1; star++){
  //     cout << "*";
  //   }
  //   cout<< endl;
  // }


  // digit counting
  // int n =28789;
  // int counter = 0;
  // do{
  //   n = n / 10;
  //   counter++;
  // }while(n>0);
  // cout<<counter;
  

  // reverse a number
  // int n = 52400;
  // int temp, reverseN = 0;
  // do{
  //   temp = n % 10;
  //   reverseN = reverseN * 10 + temp;
  //   n /= 10;
  // }while(n > 0);
  // cout << reverseN;

  // check palindrome
  // int n = 123454321; // or 1221 etc
  // int og = n;
  // int temp, num = 0;
  // do{
  //   temp = n % 10;
  //   num = num * 10 + temp;
  //   n /= 10;
  // }while(n>0);
  //  if (og == num) {
  //   cout << "palindrome number exist";
  //  }
  //  else {
  //   cout << "Not palindrome";
  //  }

  // find the GCD
  int gcd = 1;
  int n1 = 72;
  int n2 = 10;
  int min = (n1 > n2) ? n2 : n1;
  
  for(int i = 1; i <=min;i++){
    if(n1 % i == 0 && n2 % i == 0){
      gcd = i;
    }
  }
  cout << "GCD of " << n1 << "and " << n2 << " is " << gcd;
  return 0;
}