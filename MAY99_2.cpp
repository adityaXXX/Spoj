#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int n;
    std::cin >> n;
    string ref = "manku";
    string ans;
    while(n > 0){
      int rem = n%5;
      if(rem == 0){
        ans += 'u';
        n = n/5 - 1;
      }
      else{
        ans += ref[rem-1];
        n /= 5;
      }
    }
    reverse(ans.begin(), ans.end());
    std::cout << ans << '\n';
  }
}
