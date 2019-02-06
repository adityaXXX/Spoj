#include <bits/stdc++.h>

#define ll long long int

using namespace std;

struct obj{
  ll id;
  ll number;
  ll pos;
};

bool sortRec(struct obj a, struct obj b){
  if(a.number == b.number)
    return (a.pos < b.pos);
  else
    return (a.number > b.number);
}

int main(){
  ll n, c;
  std::cin >> n >> c;
  ll a[n];
  std::map<int, int> countApp;
  std::map<int, int> app;
  for(int i = 0; i < n; i++){
    std::cin >> a[i];
    countApp[a[i]]++;
  }

  for(int i = n-1; i >= 0; i--){
    app[a[i]] = i;
  }

  struct obj record[n];
  for(int i = 0; i < n; i++){
    record[i].id = a[i];
    record[i].number = countApp[a[i]];
    record[i].pos = app[a[i]];
  }

  sort(record, record + n, sortRec);

  for(int i = 0; i < n; i++){
    std::cout << record[i].id << ' ';
  }
  std::cout << '\n';
}
