#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n, x, y;
  std::cin >> n;
  while(n--){
    std::cin >> x >> y;
    long long int X, Y, N;
    X = x;
    Y = x;
    if(x%2 == 0){
      N = 2*x;
    }
    else{
      N = 2*x - 1;
    }
    if((Y-2) == y)
    std::cout << N-2 << '\n';
    else if(Y == y)
    std::cout << N << '\n';
    else
    std::cout << "No Number" << '\n';
  }
}
