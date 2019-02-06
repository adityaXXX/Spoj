#include <bits/stdc++.h>

#define ll long long int

using namespace std;

bool cmp(const pair<ll, ll> &a, const pair<ll, ll> &b){
  return (a.first > b.first);
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int N;
    std::cin >> N;
    ll m, n;
    std::vector<pair <ll, ll>> v;
    for(int i = 0; i < N; i++){
      std::cin >> m >> n;
      v.push_back(make_pair(m, n));
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 1;
    ll pre = v[0].first;
    for(int i = 1; i < N; i++){
      if(v[i].second <= pre){
        ans++;
        pre = v[i].first;
      }
    }
    std::cout << ans << '\n';
  }
}
