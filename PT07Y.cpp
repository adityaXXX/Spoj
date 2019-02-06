#include <vector>
#include <iostream>

using namespace std;

bool flag = true;

void dfs(std::vector<int> v[], bool visited[], int x){
  visited[x] = true;
  int c = 0;
  for(int i = 0; i < v[x].size(); i++){
    if(!visited[v[x][i]]){
      dfs(v, visited, v[x][i]);
    }
    else if(visited[v[x][i]]){
      c++;
    }
    if(c > 1)
      flag = false;
  }
}

int main(){
  int n, m, a, b;
  std::cin >> n >> m;
  std::vector<int> v[n+1];
  bool visited[n+1] = {false};
  for(int i = 0; i < m; i++){
    std::cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int connectivity = -1;
  if(m != n-1){
    std::cout << "NO" << '\n';
    return 0;
  }
  else{
    for(int i = 1; i <= n; i++){
      if(!visited[i]){
        dfs(v, visited, i);
        connectivity++;
        if(!flag)
          break;
        if(connectivity > 0)
          break;
      }
    }

    // std::cout << "visited" << '\n';
    // for(int i = 1; i <= n; i++)
    //   std::cout << visited[i] << '\n';
    //
    // std::cout << "connectivity = " << connectivity << '\n';

    if(flag && connectivity == 0)
      std::cout << "YES" << '\n';
    else
      std::cout << "NO" << '\n';
  }
}
