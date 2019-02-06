#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n;
    std::cin >> n;
    long long int m[n];
    long long int w[n];
    for(int i = 0; i < n; i++)
    std::cin >> m[i];
    for(int i = 0; i < n; i++)
    std::cin >> w[i];
    sort(m, m+n);
    sort(w, w+n);
    long long int ans = 0;
    for(int i = 0; i < n; i++){
      ans = ans + (m[i]*w[i]);
    }
    std::cout << ans << '\n';
  }
}
