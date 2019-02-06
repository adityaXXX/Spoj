#include <bits/stdc++.h>

using namespace std;

std::map<int, int> number;
std::map<int, int> pos;

bool sortFunc(int x, int y){
  if(number[x] != number[y])
    return (number[x] > number[y]);
  else
    return (pos[x] < pos[y]);
}

int main(){
  int n, c;
  std::vector<int> v;
  std::cin >> n >> c;
  for(int i = 0; i < n; i++){
    int temp;
    std::cin >> temp;
    v.push_back(temp);
    number[v[i]]++;
  }
  for(int i = n-1; i >=0; i--){
    pos[v[i]] = i;
  }

  sort(v.begin(), v.end(), sortFunc);

  for(int i = 0; i < n; i++){
    std::cout << v[i] << ' ';
  }
  std::cout << '\n';

}
