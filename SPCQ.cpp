#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int n;
    std::cin >> n;
    int c = 1;
    while(c){
      int sum = 0;
      ll temp = n;
      while(temp){
        int d = temp%10;
        sum += d;
        temp /= 10;
      }
      if(n%sum == 0){
        std::cout << n << '\n';
        c = 0;
      }
      else
      n += 1;
    }
  }
}
