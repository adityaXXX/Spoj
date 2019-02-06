#include <bits/stdc++.h>
#define ll long long int
using namespace std;

std::vector<ll> v{0, 1};
int visited[10000000] = {0};

int seq(ll n){
  visited[0] = 1;
  visited[1] = 1;
  for(ll i = v.size(); i <= n; i++){
    if((v[i-1] - i) > 0){
      // std::cout << "1st if" << '\n';
      if(visited[(v[i-1] - i)] == 0){
        // std::cout << "2nd if" << '\n';
        visited[(v[i-1] - i)] = 1;
        v.push_back((v[i-1] - i));
      }
      else{
        // std::cout << "1st else" << '\n';
        visited[(v[i-1] + i)] = 1;
        v.push_back((v[i-1] + i));
      }
    }
    else{
      // std::cout << "2nd else" << '\n';
      visited[(v[i-1] + i)] = 1;
      v.push_back((v[i-1] + i));
    }
    // std::cout << "Value at the end of loop:- " << v[i] << '\n';
  }
  return v[n];
}

int main(){
  ll n;
  while(true){
    std::cin >> n;
    if(n == -1)
      break;
    else
      std::cout << seq(n) << '\n';
  }
}
