#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long int n;
    std::cin >> n;
    long int a[n];
    long int sum = 0;
    for(int i = 0; i < n; i++){
      std::cin >> a[i];
      sum += a[i];
    }
    if(sum % n == 0){
      std::cout << n << '\n';
    }
    else{
      std::cout << n-1 << '\n';
    }
  }
}
