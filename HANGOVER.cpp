#include <bits/stdc++.h>

using namespace std;

int main(){
  while(true){
    float n;
    std::cin >> n;
    if(n == 0)
    break;
    float sum = 0;
    int c = 0;
    for(int i = 2; sum < n; i++){
      sum = sum + (1/(float)i);
      c++;
    }
    std::cout << c << " card(s)" << '\n';
  }
}
