#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n, k;
  std::cin >> n;
  ll a[n];
  for(int i = 0; i < n; i++)
    std::cin >> a[i];
  std::cin >> k;
  deque<ll> Q;
  ll i;
  for(i = 0; i < k; i++){
    while((!Q.empty()) && (a[i] >= a[Q.back()]))
      Q.pop_back();
    Q.push_back(i);
  }
  while(i < n){
    std::cout << a[Q.front()] << ' ';

    while((!Q.empty()) && Q.front() <= (i-k))
      Q.pop_front();

    while((!Q.empty()) && a[i] >= a[Q.back()])
      Q.pop_back();

    Q.push_back(i);
    i++;
  }
  std::cout << a[Q.front()] << '\n';
}
