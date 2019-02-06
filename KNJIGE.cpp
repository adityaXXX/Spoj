#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  std::cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    std::cin >> a[i];
    // std::cin >> b[i];
  }
  // sort(b, b+n);
  int j = n, swaps = 0;
  for(int i = n-1; i >= 0; i--){
    if(a[i] == j)
      j--;
    else
      swaps++;
  }
  std::cout << swaps << '\n';
}
