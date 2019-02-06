#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
  ll n;
  while(true){
    std::cin >> n;
    if(n == 0)
    break;
    ll temp, pre = 0, last = 0;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      last += abs(pre);
      pre += temp;
    }
    std::cout << last << '\n';
  }
  return 0;
}
