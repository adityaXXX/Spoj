#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n;
  std::cin >> t;
  while(t--){
    std::cin >> n;
    long long int temp;
    std::vector<long long int> v;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      v.push_back(temp);
    }
    int l = v.size() - 1, i = 0, length = v.size();
    long long int ans = 0;
    while(l > 0){
      // std::cout << v[length - 1 - i] << " " << v[i] << '\n';
      ans += (l)*(v[length - 1 - i] - v[i]);
      l -= 2;
      i++;
    }
    std::cout << ans << '\n';
  }
}
