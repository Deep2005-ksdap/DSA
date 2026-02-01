#include <iostream>
#include <vector>
using namespace std;

vector<int> findMyDivisors(int n);
bool  isPrime(int n);

int main() {
    // int n = 12;
    // vector<int> result = findMyDivisors(n);

    // for (int x : result) {
    //     cout << x << " ";
    // }

    const int num = 6;
    isPrime(num) ? cout << num <<" Is A Prime No." : cout << num<<" Not a PRIME no.";
    return 0;
}

bool isPrime(int n){
  if( n <= 1) {
    return false;
  }
  for(int i = 2; i < n; i++) {           // most optimised will be doing root of n -> i * i < n because rest factors will be repeated...
    if(n % i == 0){
      return false;
    }
  }
  return true;
}


vector<int> findMyDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}
