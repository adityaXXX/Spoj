#include <bits/stdc++.h>

using namespace std;

int X[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int Y[8] = {0, 1, -1, 1, -1, 0, -1, 1};

int a[51][51];
bool visited[51][51];
int moves[51][51];

int h, w, Max = 0;

void dfs(int x, int y){
  visited[x][y] = true;
  int Tx, Ty;
  for(int i = 0; i < 8; i++){
    // std::cout << "Parent = " << x << " " << y << '\n';
    Tx = x + X[i];
    Ty = y + Y[i];
    // std::cout << "Child = " << Tx << " " << Ty << '\n';
    if(Tx < h && Tx >= 0 && Ty < w && Ty >= 0){
      // std::cout << "In Limits = " << Tx << " " << Ty << '\n';
      if(!visited[Tx][Ty] && a[Tx][Ty] == a[x][y] + 1){
        moves[Tx][Ty] = moves[x][y] + 1;
        if(moves[Tx][Ty] > Max)
          Max = moves[Tx][Ty];
        // std::cout << "In = " << Tx << " " << Ty << '\n';
        dfs(Tx, Ty);
      }
    }
  }
}

int main(){
  for(int z = 1; ; z++){
    std::cin >> h >> w;
    if(h == 0 && w == 0)
      break;
    string s;
    bool flag = false;
    Max = 0;
    std::vector<pair<int, int>> v;
    for(int i = 0; i < h; i++){
      std::cin >> s;
      for(int j = 0; j < w; j++){
        a[i][j] = s[j] - 65;
        if(a[i][j] == 0){
          v.push_back(make_pair(i, j));
          flag = true;
        }
      }
    }

    memset(visited, false, sizeof(visited));
    memset(moves, 0, sizeof(moves));

    for(int i = 0; i < v.size(); i++){
      dfs(v[i].first, v[i].second);
    }

    // std::cout << "Original" << '\n';
    // for(int i = 0; i < h; i++){
    //   for(int j = 0; j < w; j++)
    //     std::cout << a[i][j] << ' ';
    //   std::cout << '\n';
    // }

    // std::cout << "Moves" << '\n';
    // for(int i = 0; i < h; i++){
    //   for(int j = 0; j < w; j++)
    //     std::cout << moves[i][j] << ' ';
    //   std::cout << '\n';
    // }

    // std::cout << "Visited" << '\n';
    // for(int i = 0; i < h; i++){
    //   for(int j = 0; j < w; j++)
    //     std::cout << visited[i][j] << ' ';
    //   std::cout << '\n';
    // }

    // std::cout << "Max = " << Max + 1 << '\n';
    if(Max == 0 && !flag)
      std::cout << "Case " << z << ": " << Max << '\n';
    else
      std::cout << "Case " << z << ": " << ++Max << '\n';
  }
}
