#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int n;
    std::cin >> n;
    long long int ans = 0, temp;
    temp = n;
    for(int i = 1; temp >= 1; i++){
      temp = (long long int)(n / pow(5, i));
      ans += temp;
    }
    std::cout << ans << '\n';
  }
}
