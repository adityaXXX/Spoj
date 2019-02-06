#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n;
    std::cin >> n;
    int height[n], seq[n];

    for(int i = 0; i < n; i++)
      std::cin >> height[i];

    for(int i = 0; i < n; i++)
      std::cin >> seq[i];

    std::vector<pair<int, int>> p;

    for(int i = 0; i < n; i++)
      p.push_back(make_pair(height[i], seq[i]+1));

    sort(p.begin(), p.end());
    std::vector<int> v(n, -1);
    for(int i = 0; i < n; i++){
      int count = 0, temp;
      for(int j = 0; j < n; j++){
        if(v[j] == -1){
          count++;
          temp = j;
        }
        if(count == p[i].second){
          break;
        }
      }
      v[temp] = p[i].first;
    }
    for(int i = 0; i < n; i++)
      std::cout << v[i] << ' ';
    std::cout << '\n';
  }
}
