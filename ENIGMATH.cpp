#include <bits/stdc++.h>

using namespace std;

int gcd(long long int a, long long int b){
  if(a == 0)
  return b;
  else
  return gcd(b%a, a);
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int a, b;
    std::cin >> a >> b;
    int hcf = gcd(a, b);
    long long int n, d;
    n = b/hcf;
    d = a/hcf;
    std::cout << n << " " << d << '\n';
  }
}
