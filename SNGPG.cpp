#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int a, b;
    std::cin >> a >> b;
    int c = 0;
    for(int i = a; i <= b; i++){
      if(i == 0 || i == 1 || i == 2 || i == 3)
      c++;
    }
    std::cout << c << '\n';
  }
}
