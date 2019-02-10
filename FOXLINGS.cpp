#include <bits/stdc++.h>

#define ll long long int

using namespace std;

std::unordered_map<ll, ll> M;
std::unordered_map<ll, ll> size;
std::unordered_map<ll, ll> id;

ll root(ll x){
  while(id[x] != x){
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void join(ll x, ll y){
  ll rootX = root(M[x]);
  ll rootY = root(M[y]);
  if(size[rootX] >= size[rootY] && rootX != rootY){
    id[rootY] = rootX;
    size[rootX] += size[rootY];
  }
  else if(size[rootY] > size[rootX] && rootX != rootY){
    id[rootX] = rootY;
    size[rootY] += size[rootX];
  }
}

int main(){
  ll n, m, a, b;
  std::cin >> n >> m;
  std::unordered_set<ll> S;
  ll c = 1;
  for(int i = 0; i < m; i++){
    std::cin >> a >> b;
    if(M[a] == 0){
      M[a] = c;
      id[c] = c;
      size[c] = 1;
      c++;
    }
    if(M[b] == 0){
      M[b] = c;
      id[c] = c;
      size[c] = 1;
      c++;
    }
    S.insert(a);
    S.insert(b);
    join(a, b);

    // std::cout << "ID = " << '\n';
    // for(auto i = id.begin(); i != id.end(); i++)
    //   std::cout << i->first << " " << i->second << '\n';
    //
    // std::cout << "Size = " << '\n';
    // for(auto i = size.begin(); i != size.end(); i++)
    //   std::cout << i->first << " " << i->second << '\n';
  }
  ll connected = n - S.size();
  std::unordered_set<ll> P;
  for(auto i = S.begin(); i != S.end(); i++)
    P.insert(root(M[*i]));

  // std::cout << "P.size() = " << P.size() << '\n';
  // std::cout << "S.size() = " << S.size() << '\n';
  // std::cout << "connected = " << connected << '\n';
  // std::cout << "Ans = " << connected + P.size() << '\n';
  std::cout << connected + P.size() << '\n';
}
