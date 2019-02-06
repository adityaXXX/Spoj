#include <iostream>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n, c = 0;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
      std::cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
      a[i+1] -= a[i];
      a[i] -= a[i];
      if(a[i+1] < 0){
        c++;
        break;
      }
    }
    if(a[n-1] != 0)
    c++;
    if(c != 0)
    std::cout << "NO" << '\n';
    else if(c == 0)
    std::cout << "YES" << '\n';
  }
}
