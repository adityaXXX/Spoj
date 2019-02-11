#include <bits/stdc++.h>

using namespace std;

std::unordered_map<int, int> id;
std::unordered_map<int, int> size;

int MAX = INT_MIN;
int MIN = INT_MAX;

int root(int x){
  while(id[x] != x){
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void join(int rootX, int rootY){
  if(size[rootX] >= size[rootY]){
    id[rootY] = rootX;
    size[rootX] += size[rootY];
    if(size[rootX] > MAX)
      MAX = size[rootX];
    if(size[rootX] < MIN)
      MIN = size[rootX];
  }
  else{
    id[rootX] = rootY;
    size[rootY] += size[rootX];
    if(size[rootY] > MAX)
      MAX = size[rootY];
    if(size[rootY] < MIN)
      MIN = size[rootY];
  }

}

int main(){
  int n, q, a, b;
  std::cin >> n >> q;
  std::unordered_set<int> S;
  int count = n;
  while(q--){
    std::cin >> a >> b;
    if(!id[a]){
      id[a] = a;
      size[a] = 1;
    }
    if(!id[b]){
      id[b] = b;
      size[b] = 1;
    }
    S.insert(a);
    S.insert(b);
    int rootX = root(id[a]);
    int rootY = root(id[b]);
    if(rootX != rootY){
      join(rootX, rootY);
      count--;
    }
    // std::cout << "Count = " << count << '\n';
    if(n - S.size() > 0)
      std::cout << MAX - 1 << '\n';
    else if(n - S.size() == 0 && count != 1)
      std::cout << MAX - MIN << '\n';
    else
      std::cout << 0 << '\n';
  }
}
