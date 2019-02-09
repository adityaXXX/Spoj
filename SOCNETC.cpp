#include <bits/stdc++.h>

using namespace std;

int root(int x, int id[]){
  while(id[x] != x){
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void join(int x, int y, int limit, int id[], int size[]){
  int rootX = root(x, id);
  int rootY = root(y, id);
  if(size[rootX] + size[rootY] <= limit){
    if(size[rootX] > size[rootY]){
      id[rootY] = rootX;
      size[rootX] += size[rootY];
    }
    else{
      id[rootX] = rootY;
      size[rootY] += size[rootX];
    }
  }
}

int main(){
  int n, m, q;
  std::cin >> n >> m >> q;
  int id[n+1];
  int size[n+1];
  for(int i = 0; i <= n; i++){
    id[i] = i;
    size[i] = 1;
  }
  char s;
  int a, b;
  for(int i = 0; i < q; i++){
    std::cin >> s;
    if(s == 'S'){
      std::cin >> a;
      std::cout << size[root(a, id)] << '\n';
    }
    else if(s == 'A'){
      std::cin >> a >> b;
      join(a, b, m, id, size);
    }
    else if(s == 'E'){
      std::cin >> a >> b;
      if(root(a, id) == root(b, id))
        std::cout << "Yes" << '\n';
      else
        std::cout << "No" << '\n';
    }
    // std::cout << "Size = " << '\n';
    // for(int i = 1; i <= n; i++)
    //   std::cout << size[i] << ' ';
    // std::cout << '\n';
    // std::cout << "ID = " << '\n';
    // for(int i = 1; i <= n; i++)
    //   std::cout << id[i] << ' ';
    // std::cout << '\n';
  }
}
