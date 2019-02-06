#include <bits/stdc++.h>

using namespace std;

int multiply(int a[], int number, int s){
  int carry = 0, prod;
  for(int i = 0; i < s; i++){
    prod = a[i] * number + carry;
    a[i] = prod % 10;
    carry = (int)(prod / 10);
  }
  while(carry){
    a[s++] = carry % 10;
    carry = (int)(carry / 10);
  }
  return s;
}

int main(){
  int t, n;
  std::cin >> t;
  while(t--){
    std::cin >> n;
    int s = 1;
    int a[5000];
    a[0] = 1;
    for(int i = 2; i <= n; i++){
      s = multiply(a, i, s);
    }
    for(int i = s-1; i >= 0; i--){
      std::cout << a[i];
    }
    std::cout << '\n';
  }
}
