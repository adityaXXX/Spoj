#include <bits/stdc++.h>

using namespace std;

int chess[8][8];
int x[9]={0,-1,-1,-2,-2,2,2,1,1};
int y[9]={0,-2,2,-1,1,-1,1,-2,2};

void bfs(int sx, int sy, int ex, int ey){
  queue<pair<int, int>> Q;
  pair<int, int> P;
  int Tx, Ty;
  Q.push(make_pair(sx, sy));
  int visited[8][8] = {0};
  visited[sx][sy] = 1;
  while(!Q.empty()){
    P = Q.front();
    Q.pop();
    if(P.first == ex && P.second == ey)
      break;
    for(int i = 1; i <= 8; i++){
      Tx = P.first + x[i];
      Ty = P.second + y[i];
      if(Tx <= 7 && Tx >= 0 && Ty <= 7 && Ty >= 0){
        if(visited[Tx][Ty] == 1)
          continue;
        visited[Tx][Ty] = 1;
        Q.push(make_pair(Tx, Ty));
        chess[Tx][Ty] = chess[P.first][P.second] + 1;
      }
    }
  }
  std::cout << "VISITED" << '\n';
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++)
      std::cout << visited[i][j] << ' ';
    std::cout << '\n';
  }
  std::cout << '\n';

  std::cout << "CHESS" << '\n';

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++)
      std::cout << chess[i][j] << ' ';
    std::cout << '\n';
  }
  std::cout << '\n';
  std::cout << chess[ex][ey] << '\n';
}

int main(){
  int t, a, b, c, d;
  string start, end;
  std::cin >> t;
  while(t--){
    std::cin >> start >> end;
    a = int(start[0]) - 97;
    b = int(start[1]) - 49;
    c = int(end[0]) - 97;
    d = int(end[1]) - 49;
    memset(chess, 0, sizeof(chess));
    // std::cout << a << " " << b << " " << c << " " << d << '\n';
    bfs(a, b, c, d);
  }
}
