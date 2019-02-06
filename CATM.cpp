#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, t, Rx, Ry, C1x, C2x, C1y, C2y;
  std::cin >> n >> m;
  std::cin >> t;
  while(t--){
    std::cin >> Rx >> Ry >> C1x >> C1y >> C2x >> C2y;
    int c = 0, Nx = Rx, Ny = Ry;
    while(Nx <= n && Ny <= m && Nx > 0 && Ny > 0){
      Nx += 1;
      Ny += 1;
      if((Nx == C1x && Ny == C1y) || (Nx == C2x && Ny == C2y)){
        c++;
        break;
      }
    }
    Nx = Rx;
    Ny = Ry;
    while(Nx <= n && Ny <= m && Nx > 0 && Ny > 0){
      Nx += -1;
      Ny += -1;
      if((Nx == C1x && Ny == C1y) || (Nx == C2x && Ny == C2y)){
        c++;
        break;
      }
    }
    Nx = Rx;
    Ny = Ry;
    while(Nx <= n && Ny <= m && Nx > 0 && Ny > 0){
      Nx += -1;
      Ny += 1;
      if((Nx == C1x && Ny == C1y) || (Nx == C2x && Ny == C2y)){
        c++;
        break;
      }
    }
    Nx = Rx;
    Ny = Ry;
    while(Nx <= n && Ny <= m && Nx > 0 && Ny > 0){
      Nx += 1;
      Ny += -1;
      if((Nx == C1x && Ny == C1y) || (Nx == C2x && Ny == C2y)){
        c++;
        break;
      }
    }
    if(c == 2)
    std::cout << "NO" << '\n';
    else
    std::cout << "YES" << '\n';
  }
}
