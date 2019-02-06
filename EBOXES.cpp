#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int t, N, K, T, F;
  std::cin >> t;
  while(t--){
      std::cin >> N >> K >> T >> F;
      std::cout << ((F-N) / (K - 1)) + F << '\n';
  }
  return 0;
}
