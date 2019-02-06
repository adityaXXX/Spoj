#include <bits/stdc++.h>

using namespace std;

int gcd(long int a, long int b){
  if(a == 0)
  return b;
  else
  return gcd(b%a, a);
}

int main(){
  int t;
  std::cin >> t;
  for(int i = 1; i <= t; i++){
    long int a, b, c;
    std::cin >> a >> b >> c;
    int hcf = gcd(a, b);
    if(c%hcf == 0)
    std::cout << "Case " << i << ": " << "Yes" << '\n';
    else
    std::cout << "Case " << i << ": " << "No" << '\n';
  }
}
