#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    int a[n];
    memset(a, 0, n*sizeof(int));
    int c = 0;
    for(int i = 0; i < n; i++){
      std::cin >> a[i];
      if(a[i] < i+1)
      c++;
    }
    if(c == n)
    std::cout << "YES" << '\n';
    else
    std::cout << "NO" << '\n';
  }
}
