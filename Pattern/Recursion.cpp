#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printMyName(int n);
void increasNo(int n, int count);
void decreasNo(int n, int count);
int sumOfNumbers(int n);
int facorialOfNumbers(int n);
bool checkPalindrome(string val, int pt1, int pt2);
void reverseArr(int arr[]);
int fibonacciSeries(int n);

int main(){
  int n = 4;
  string name = "abcdcba";
  int endPtr = name.length();

  // printMyName(4);
  // increasNo(n, 1);
  // decreasNo(n, 1);
  // int sum = sumOfNumbers(n);
  // int fact = facorialOfNumbers(n);
   
  // checkPalindrome(name, 0, endPtr-1) ? cout << "Is a palindrome" : cout << "Not a Palindrome";
  cout << fibonacciSeries(n);
  return 0;
}

int fibonacciSeries(int n){
  if(n == 0) return 0;
  if(n == 1) return 1;
   n = fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

bool checkPalindrome(string val, int pt1, int pt2){
  if (pt1 >= pt2) return true;
  if (val[pt1] != val[pt2]) return false;
  return checkPalindrome(val, pt1 + 1, pt2 - 1);
}

void reverseArr(int arr[]){
  // 1. brutal force approach
  int size = 0; // need to be assign the size of parameter array
  int arr2[size];

  for(int i = 0; i < size; i++){
    arr2[i] = arr[size];
    size--;
  }

  // 2. optimal approach
  int ptr1 = 0;
  int ptr2 = size-1;

  while(ptr1  <  ptr2){
    arr2[ptr1] = arr[ptr2];
    ptr1++;
    ptr2--;
  }

  // 3. built in method approach


  for(int el : arr2){
    cout << el;
  }
}

int facorialOfNumbers(int n){
  if (n ==  1) return 1;
  return n * facorialOfNumbers(n-1);
}

int sumOfNumbers(int n){
  if (n == 1) {return 1;}
  return n + sumOfNumbers(n-1);
}

// forward recursion -> print first , than call
void increasNo(int n, int count){
   if(count > n) return;
   cout << count << "\t";
   increasNo(n, count+1);

}

// backtracking -> call first(under some base case) -> than print
void decreasNo(int n, int count){
  if(count > n) return;

  decreasNo(n, count+1);
  cout << count << "\t";
}

void printMyName(int n){
  if( n > 0){
    cout << "Hey its me Deep!" << "\t";
  }
    printMyName(n-1);
}