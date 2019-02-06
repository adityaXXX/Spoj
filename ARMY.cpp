#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    int N = INT_MIN, M = INT_MIN, temp;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      if(temp > N)
      N = temp;
    }
    for(int i = 0; i < m; i++){
      std::cin >> temp;
      if(temp > M)
      M = temp;
    }
    if(N<M)
    std::cout << "MechaGodzilla" << '\n';
    else
    std::cout << "Godzilla" << '\n';
  }
}
