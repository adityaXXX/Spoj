//Sequencially follow birbal's orders to get an AC!!!

#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void bfs(std::vector<int> v[], bool visited[], int count[], ll x, ll s){
  std::queue<std::pair<ll, int>> Q;
  std::pair<ll, int> P;
  visited[x] = true;
  if(count[x] == 0)
    count[x] = 1;
  else if(count[x] == 1)
    count[x] = -1;
  Q.push(make_pair(x, 0));
  while(!Q.empty()){
    P = Q.front();
    Q.pop();
    if(P.second >= s)
      break;
    for(int i = 0; i < v[P.first].size(); i++){
      if(visited[v[P.first][i]] == false){
        if(count[v[P.first][i]] == 0)
          count[v[P.first][i]] = 1;
        else if(count[v[P.first][i]] == 1)
          count[v[P.first][i]] = -1;
        Q.push(make_pair(v[P.first][i], P.second + 1));
        visited[v[P.first][i]] = true;
      }
    }
  }
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    ll n, r, m, a, b;
    std::cin >> n >> r >> m;
    std::vector<int> v[n+1];
    for(int i = 0; i < r; i++){
      std::cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    std::pair<ll, ll> P[m];
    for(int i = 0; i < m; i++){
      std::cin >> a >> b;
      P[i].first = a;
      P[i].second = b;
    }
    int count[n+1] = {0};
    bool visited[n+1] = {false};
    for(int i = 0; i < m; i++)
      bfs(v, visited, count, P[i].first, P[i].second);

    // std::cout << "Visited" << '\n';
    // for(int i = 1; i <= n; i++)
    //   std::cout << visited[i] << '\n';
    //
    // std::cout << "Count" << '\n';
    // for(int i = 1; i <= n; i++)
    //   std::cout << count[i] << '\n';

    bool countFlag = true, visitedFlag = true;
    for(int i = 1; i <= n; i++){
      if(count[i] == -1 || count[i] == 0){
        countFlag = false;
        break;
      }
      if(visited[i] == false){
        visitedFlag = false;
        break;
      }
    }
    if(countFlag && visitedFlag)
      std::cout << "Yes" << '\n';
    else
      std::cout << "No" << '\n';
  }
}
