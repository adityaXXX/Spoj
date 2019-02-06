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
  long long int x, y, z, MIN, MAX;
  while(t--){
    std::cin >> x >> y >> z;
    if(x > y){
      MAX = x;
      MIN = y;
    }
    else{
      MAX = y;
      MIN = x;
    }
    if(z > MAX){
      std::cout << "NO" << '\n';
      continue;
    }
    int hcf = gcd(MAX, MIN);
    if(z%hcf == 0)
    std::cout << "YES" << '\n';
    else
    std::cout << "NO" << '\n';
  }
}
