#include <bits/stdc++.h>

using namespace std;

int main(){
  double g, b;
  std::cin >> g >> b;
  while(g != -1 && b != -1){
    if(g == 0)
      std::cout << b << '\n';
    else if(b == 0)
      std::cout << g << '\n';
    else if(g > b)
    std::cout << ceil(g/(b+1)) << '\n';
    else
      std::cout << ceil(b/(g+1)) << '\n';
    std::cin >> g >> b;
  }
}
