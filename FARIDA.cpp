#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n;
  std::cin >> t;
  for(int i = 1 ; i <= t; i++){
    std::cin >> n;
    long long int temp, dp[4];
    memset(dp, 0, sizeof(dp));
    int c = 0;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      dp[c%4] = temp + max(dp[(c+1)%4], dp[(c+2)%4]);
      c = (c+1)%4;
    }
    std::cout << "Case " << i << ": " << max(dp[(c+2)%4], dp[(c+3)%4]) << '\n'; 
  }
}
