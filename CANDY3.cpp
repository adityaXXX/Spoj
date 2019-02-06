#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int t;
  std::cin >> t;
  while(t--){
    long long int n, temp, sum = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      sum += (temp%n);
    }
    if(sum % n == 0)
    std::cout << "YES" << '\n';
    else
    std::cout << "NO" << '\n';
  }
}
