#include <bits/stdc++.h>

using namespace std;

int a[200][200];
bool visited[200][200];
int moves[200][200];

int n, m;

void bfs(int x, int y){
  std::queue<pair<int, int>> Q;
  int Tx, Ty;
  visited[x][y] = true;
  std::pair<int, int> P;
  Q.push(make_pair(x, y));
  while(!Q.empty()){
    P = Q.front();
    Q.pop();
    for(Tx = 0; Tx < n; Tx++){
      for(Ty = 0; Ty < m; Ty++){
        if(a[Tx][Ty] == 0){
          if(moves[Tx][Ty] > (abs(Tx - P.first) + abs(Ty - P.second)))
            moves[Tx][Ty] = (abs(Tx - P.first) + abs(Ty - P.second));
        }
        else if(a[Tx][Ty] == 1 && !visited[Tx][Ty]){
          Q.push(make_pair(Tx, Ty));
          visited[Tx][Ty] = true;
        }
      }
    }
  }
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    std::cin >> n >> m;
    string s;
    int x, y;
    bool flag = false;
    for(int i = 0; i < n; i++){
      std::cin >> s;
      for(int j = 0; j < m; j++){
        a[i][j] = s[j] - '0';
        if(a[i][j] == 1){
          x = i;
          y = j;
          flag = true;
          moves[x][y] = -1;
        }
        else
          moves[i][j] = INT_MAX;
      }
    }

    memset(visited, false, sizeof(visited));

    if(flag)
      bfs(x, y);
    else{
      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            std::cout << 0 << ' ';
        std::cout << '\n';
      }
      continue;
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(moves[i][j] == -1)
          std::cout << 0 << ' ';
        else
          std::cout << moves[i][j] << ' ';
      }
      std::cout << '\n';
    }

  }
}
