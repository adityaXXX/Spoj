#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while (t--) {
    int n, m, temp;
    std::cin >> n;
    std::vector<int> a;
    std::vector<int> b;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      a.push_back(temp);
    }
    std::cin >> m;
    for(int i = 0; i < m; i++){
      std::cin >> temp;
      b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int x = 0, y = 0;
    int min = INT_MAX;
    while(x < n && y < m){
      temp = abs(a[x] - b[y]);
      if (min > temp)
      min = temp;
      if (a[x] > b[y])
      y++;
      else
      x++;
    }
    std::cout << min << '\n';
  }
}
