#include <bits/stdc++.h>

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int sum, length, x, A;
    std::cin >> x >> A;
    sum = (A + 1)*(A-x);
    length = A-x;
    sum -= ((length-1) * (length) / 2);
    std::cout << sum << '\n';
  }
}
