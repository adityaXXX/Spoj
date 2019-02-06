#include <bits/stdc++.h>

using namespace std;

int main(){
  while(true){
    int n;
    std::cin >> n;
    if(n == 0)
    break;
    std::cout << n*(n + 1)*((2*n) + 1)/6 << '\n';
  }
}
