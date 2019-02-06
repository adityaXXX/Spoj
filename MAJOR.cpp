#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n;
  std::cin >> t;
  while(t--){
    int visited[2001];
    memset(visited, 0, sizeof(visited));
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
      std::cin >> a[i];
      if(a[i] >= 0)
        visited[a[i]]++;
      else
        visited[1000 + abs(a[i])]++;
    }
    if(*max_element(visited, visited+2001) <= (n/2))
      std::cout << "NO" << '\n';
    else{
      std::cout << "YES ";
      int location = distance(visited, max_element(visited, visited+2001));
      if(location >= 1001){
        location = -1 * (location-1000);
        std::cout << location << '\n';
      }
      else
        std::cout << location << '\n';
    }
  }
}
