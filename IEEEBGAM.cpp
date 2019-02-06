#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    float n;
    std::cin >> n;
    float ans = ((1/n) * (n-1)) + ((1/n) * (1/(n+1)));
    printf("%0.8f\n", ans);
  }
}
