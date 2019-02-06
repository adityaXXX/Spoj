#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long int n;
  std::cin >> n;
  int c = 0;
  while(n > 1){
    if(n%2 == 0){
      n /= 2;
    }
    else{
      c = 1;
      break;
    }
  }
  if(c == 1)
  std::cout << "NIE" << '\n';
  else
  std::cout << "TAK" << '\n';
}
