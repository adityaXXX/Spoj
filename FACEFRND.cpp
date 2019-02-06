#include <bits/stdc++.h>

using namespace std;

int main(){
  int people[100000];
  memset(people, 0, sizeof(people));
  int t, ans = 0;
  std::cin >> t;
  while(t--){
    int id;
    std::cin >> id;
    if(people[id] == 1)
      ans--;
    people[id] = -1;
    int m;
    std::cin >> m;
    while(m--){
      std::cin >> id;
      if(people[id] == 0){
        ans++;
        people[id] = 1;
      }
    }
  }
  std::cout << ans << '\n';
}
