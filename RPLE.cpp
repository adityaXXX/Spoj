#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n, r;
  std::cin >> t;
  for(int z = 1; z <= t; z++){
    std::cin >> n >> r;
    int a[n], b[n], r1, r2, c = 0;
    memset(a, 0, n*sizeof(int));
    memset(b, 0, n*sizeof(int));
    for(int i = 0; i < r; i++){
      std::cin >> r1 >> r2;
      a[r1]++;
      b[r2]++;
    }
    for(int i = 0; i < n; i++){
      if(b[i] != 0 && a[i] != 0){
        std::cout << "Scenario #" << z << ": " <<  "spied" << '\n';
        break;
      }
      else
        c++;
    }
    if(c == n)
      std::cout << "Scenario #" << z << ": " <<  "spying" << '\n';
  }
}
