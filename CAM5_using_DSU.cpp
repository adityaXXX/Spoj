#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll root(ll id[], ll x){
  while(id[x] != x){
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void join(ll a, ll b, ll id[], ll size[]){
  ll rootX = root(id, a);
  ll rootY = root(id, b);
  if(size[rootX] > size[rootY]){
    id[rootY] = rootX;
    size[rootX] += size[rootY];
  }
  else{
    id[rootX] = rootY;
    size[rootY] += size[rootX];
  }
}

int main(){
  ll t, n, m, a, b;
  std::cin >> t;
  while(t--){
    std::cin >> n >> m;
    ll id[n], size[n];
    for(int i = 0; i < n; i++)
    id[i] = i;
    memset(size, 1, sizeof(size));
    for(int i = 0; i < m; i++){
      std::cin >> a >> b;
      join(a, b, id, size);
    }
    std::set<ll> s;
    for(int i = 0; i < n; i++){
      s.insert(root(id, i));
    }
    std::cout << s.size() << '\n';
  }
}
