#include <iostream>

using namespace std;

int rev(long long int a){
  long long int sum = 0;
  while(a != 0){
    long long int t = a%10;
    sum = sum*10 + t;
    a /= 10;
  }
  return sum;
}

int main(){
  int t;
  std::cin >> t;
  for(int i = 0; i < t; i++){
    long long int a, b;
    std::cin >> a >> b;
    a = rev(a);
    // std::cout << a << '\n';
    b = rev(b);
    // std::cout << b << '\n';
    long long int ans = a + b;
    ans = rev(ans);
    std::cout << ans << '\n';
  }
  return 0;
}
