#include <bits/stdc++.h>

using namespace std;

bool bfs(std::vector<int> v[], int color[], int x, bool visited[]){
  color[x] = 1;
  queue <int> Q;
  Q.push(x);
  visited[x] = true;
  while(!Q.empty()){
    int node = Q.front();
    // std::cout << "Parent = " << node << '\n';
    Q.pop();
    for(long long int i = 0; i < v[node].size(); i++){
      // std::cout << "Child = " << v[node][i] << '\n';
      if(visited[v[node][i]] == false && color[v[node][i]] == -1){
        color[v[node][i]] = 1 - color[node];
        // std::cout << "Color = " << color[v[node][i]] << '\n';
        Q.push(v[node][i]);
        visited[v[node][i]] = true;
      }
      else if(visited[v[node][i]] == true && color[v[node][i]] == color[node]){
        // std::cout << "Invalid Loop" << '\n';
        return false;
      }
    }
  }
  return true;
}

int main(){
  long long int n, a, b, t, m;
  std::cin >> t;
  for(long long int z = 1; z <= t; z++){
    std::cin >> n >> m;
    std::vector<int> v[n+1];
    for(long long int i = 0; i < m; i++){
      std::cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    // int color[n+1] = {-1};
    int color[n+1];
    memset(color, -1, sizeof(color));
    bool visited[n+1] = {false};
    bool flag = true;
    for(long long int i = 1; i <= n; i++){
      if(visited[i] == false){
        flag = bfs(v, color, i, visited);
        if(flag == false)
          break;
      }
    }

    // std::cout << "color" << '\n';
    // for(int i = 0; i <= n; i++)
    //   std::cout << color[i] << '\n';
    //
    // std::cout << "visited" << '\n';
    // for(int i = 0; i <= n; i++)
    //   std::cout << visited[i] << '\n';

    if(flag == true)
      std::cout << "Scenario #" << z << ":" << '\n' << "No suspicious bugs found!" << '\n';
    else
      std::cout << "Scenario #" << z << ":" << '\n' << "Suspicious bugs found!" << '\n';
  }
}
