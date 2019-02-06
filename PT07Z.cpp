#include <bits/stdc++.h>

int node = 1;
int temp = 0;

void dfs(std::vector<int> v[], bool visited[], int distance[], int x){
  visited[x] = true;
  for(int i = 0; i < v[x].size(); i++){
    // std::cout << "parent = " << x << "child = " << v[x][i] << '\n';
    if(!visited[v[x][i]]){
      // std::cout << "1st if" << '\n';
      distance[v[x][i]] = distance[x] + 1;
      dfs(v, visited, distance, v[x][i]);
    }
    if(v[x].size() == 1){
      if(distance[x] > temp){
        temp = distance[x];
        node = x;
      }
      // std::cout << "2nd if" << '\n';
    }
  }
}

int main(){
  int n, a, b;
  std::cin >> n;
  std::vector<int> v[n+1];
  for(int i = 1; i < n; i++){
    std::cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  bool visited[n+1] = {false};
  int distance[n+1] = {0};
  dfs(v, visited, distance, node);

  // std::cout << "1st:" << '\n';
  //
  //
  // std::cout << "visited " << '\n';
  // for(int i = 1; i <= n; i++)
  //   std::cout << visited[i] << '\n';
  //
  // std::cout << "distance" << '\n';
  // for(int i = 1; i <= n; i++)
  //   std::cout << distance[i] << '\n';
  //
  // std::cout << "node = " << node << '\n';

  memset(visited, false, sizeof(visited));
  memset(distance, 0, sizeof(distance));

  temp = 0;
  // std::cout << "2nd:" << '\n';
  dfs(v, visited, distance, node);

  // std::cout << "visited " << '\n';
  // for(int i = 1; i <= n; i++)
  //   std::cout << visited[i] << '\n';
  //
  // std::cout << "distance" << '\n';
  // for(int i = 1; i <= n; i++)
  //   std::cout << distance[i] << '\n';
  //
  // std::cout << "node = " << node << '\n';

  std::cout << distance[node] << '\n';
}
