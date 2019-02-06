#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll t, n, ans = 0;
  std::cin >> t;
  multiset <int> s;
  multiset <int> :: iterator f, r;
  while(t--){
    std::cin >> n;
    ll temp;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      s.insert(temp);
    }
    f = s.begin();
    r = s.end();
    r--;
    ans += (*r - *f);
    s.erase(f);
    s.erase(r);
  }
  std::cout << ans << '\n';
}
