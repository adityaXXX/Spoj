#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n, m, c;
  std::cin >> n >> m >> c;
  ll a[n];
  for(int i = 0; i < n; i++)
    std::cin >> a[i];
  deque<ll> Q, P;
  ll i, diff, count = 0;
  for(i = 0; i < m; i++){
    while((!Q.empty()) && (a[i] >= a[Q.back()]))
      Q.pop_back();
    while((!P.empty()) && (a[i] <= a[P.back()]))
      P.pop_back();
    Q.push_back(i);
    P.push_back(i);
  }
  while(i < n){
    diff = a[Q.front()] - a[P.front()];
    if(diff <= c){
      std::cout << i - m + 1 << '\n';
      count++;
    }

    if((!Q.empty()) && Q.front() <= (i-m))
      Q.pop_front();

    if((!P.empty()) && P.front() <= (i-m))
      P.pop_front();

    while((!Q.empty()) && a[i] >= a[Q.back()])
      Q.pop_back();

    while((!P.empty()) && a[i] <= a[P.back()])
      P.pop_back();

    Q.push_back(i);
    P.push_back(i);
    i++;
  }
  diff = a[Q.front()] - a[P.front()];
  if(diff <= c){
    std::cout << i - m + 1 << '\n';
    count++;
  }
  if(count == 0)
    std::cout << "NONE" << '\n';
}
