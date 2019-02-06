#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  long long int pre, N;
  std::vector<long long int> v{1, 2};
  pre = 3;
  for(int i = 1; i <= 10000; i++){
    for(int j = 0; j < v[i]; j++){
      v.push_back(pre);
    }
    pre++;
  }
  int i = 1;
  while(t--){
    std::cin >> N;
    std::cout << "Case #" << i << ": " << v[N-1] << '\n';
    i++;
  }
}
