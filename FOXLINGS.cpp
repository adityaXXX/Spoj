#include <bits/stdc++.h>

#define ll long long int

using namespace std;

std::unordered_map<ll, ll> M;
std::unordered_map<ll, ll> size;

ll root(ll x){
  while(M[x] != x){
    M[x] = M[M[x]];
    x = M[x];
  }
  return x;
}

void join(ll rootX, ll rootY){
  if(size[rootX] >= size[rootY] && rootX != rootY){
    M[rootY] = rootX;
    size[rootX] += size[rootY];
  }
  else if(size[rootY] > size[rootX] && rootX != rootY){
    M[rootX] = rootY;
    size[rootY] += size[rootX];
  }
}

int main(){
  ll n, m, a, b;
  std::cin >> n >> m;
  ll count = n;
  for(int i = 0; i < m; i++){
    std::cin >> a >> b;
    if(M[a] == 0){
      M[a] = a;
      size[a] = 1;
    }
    if(M[b] == 0){
      M[b] = b;
      size[b] = 1;
    }
    ll rootX = root(M[a]);
    ll rootY = root(M[b]);
    if(rootX != rootY){
      count--;
      join(rootX, rootY);
    }

    // std::cout << "ID = " << '\n';
    // for(auto i = id.begin(); i != id.end(); i++)
    //   std::cout << i->first << " " << i->second << '\n';
    //
    // std::cout << "Size = " << '\n';
    // for(auto i = size.begin(); i != size.end(); i++)
    //   std::cout << i->first << " " << i->second << '\n';
  }
  std::cout << count << '\n';
}
