#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n;
    std::cin >> n;
    int a[n];
    int b[n] = {0};
    bool wrong = false;
    for(int i = 0; i < n; i++){
      std::cin >> a[i];
      if(a[i] >= n || a[i] < 1){
        wrong = true;
      }
      else{
        b[a[i]]++;
      }
    }
    if(wrong){
      std::cout << "NO" << '\n';
      continue;
    }
    else{
      int c = 0;
      for(int i = 1; i < n; i++){
        if(b[i] <= 2)
        c++;
      }
      if(c == n-1){
        if(n%2 == 1){
          if(b[(n/2)] == 1)
          std::cout << "YES" << '\n';
          else
          std::cout << "NO" << '\n';
        }
        else
        std::cout << "YES" << '\n';
      }
      else
      std::cout << "NO" << '\n';
    }
  }
}
