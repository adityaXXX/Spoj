#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[251][251];
bool visited[251][251];
std::map<int, int> M;
int sum = 0;

int X[4] = {1, -1, 0, 0};
int Y[4] = {0, 0, 1, -1};

void bfs(int x, int y){
  queue<pair<int, int>> Q;
  pair<int, int> P;
  int Tx, Ty, countSum = 1;
  Q.push(make_pair(x, y));
  visited[x][y] = true;
  while(!Q.empty()){
    P = Q.front();
    Q.pop();
    for(int i = 0; i < 4; i++){
      Tx = P.first + X[i];
      Ty = P.second + Y[i];
      if(Tx >= 0 && Tx < n && Ty >= 0 && Ty < m){
        if(a[Tx][Ty] == 1 && !visited[Tx][Ty]){
          visited[Tx][Ty] = true;
          countSum++;
          Q.push(make_pair(Tx, Ty));
        }
        else
          continue;
      }
    }
  }
  M[countSum]++;
  sum++;
}

int main(){
  while(true){
    std::cin >> n >> m;
    if(n == 0 && m == 0)
      break;
    bool flag = false;
    sum = 0;
    M.clear();
    std::vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        std::cin >> a[i][j];
        if(a[i][j] == 1){
          v.push_back(make_pair(i, j));
          flag = true;
        }
      }
    }
    memset(visited, false, sizeof(visited));
    if(!flag){
      std::cout << 0 << '\n';
      continue;
    }
    for(int i = 0; i < v.size(); i++){
      if(!visited[v[i].first][v[i].second])
        bfs(v[i].first, v[i].second);
    }
    std::cout << sum << '\n';
    for(auto i = M.begin(); i != M.end(); i++)
      std::cout << i->first << " " << i->second << '\n';
  }
}
