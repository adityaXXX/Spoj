#include <bits/stdc++.h>

using namespace std;

int main(){
  while(true){
    int n;
    std::cin >> n;
    if(n == 0)
    break;
    int e = log(n)/log(2);
    std::cout << e << '\n';
  }
}
