#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
  ll n, m;
  std::cin >> n >> m;
  ll arr[n];
  for(int i = 0; i < n; i++)
    std::cin >> arr[i];
  int i = 0, j = 0;
  ll max = 0, ans = 0;
  while(j < n){
    if(i < n)
      ans += arr[i];
    // std::cout << "ans = " << ans << '\n';
    while(ans > m){
      ans -= arr[j++];
      // std::cout << "new ans = " << ans << '\n';
    }
    if(ans > max && ans <= m){
      max = ans;
      // std::cout << "max = " << max << '\n';
      if(max == m)
        break;
    }
    if(i < n)
      i++;
    else
      j++;
    // std::cout << "i = " << i << '\n';
    // std::cout << "j = " << j << '\n';
  }
  std::cout << max << '\n';
}
