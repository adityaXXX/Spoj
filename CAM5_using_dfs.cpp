#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void dfs(std::vector<ll> v[], ll x, bool visited[]){
  for(int i = 0; i < v[x].size(); i++){
    if(visited[v[x][i]] == false){
      visited[v[x][i]] = true;
      dfs(v, v[x][i], visited);
    }
  }
}

int main(){
  ll t, n, m, a, b;
  std::cin >> t;
  while(t--){
    std::cin >> n >> m;
    std::vector<ll> v[n];
    for(int i = 0; i < m; i++){
      std::cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    bool visited[n] = {false};
    ll count = 0;
    for(int i = 0; i < n; i++){
      if(visited[i] == false){
        dfs(v, i, visited);
        count++;
      }
    }
    std::cout << count << '\n';
  }
}
