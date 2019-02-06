#include <bits/stdc++.h>

using namespace std;

std::vector<long long int> v{0, 1, 3};
// int v[] = {0, 1, 3};

long long int result(int n){
  long long int ans;
  if(n >= v.size()){
    v.push_back(result(n-1) - result(n-2));
  }
  return v[n];
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int n;
    std::cin >> n;
    long long int ans = result(n);
    for(int i = 0; i < n; i++){
      ans += v[i];
    }
    std::cout << ans << '\n';
  }
}
