#include <bits/stdc++.h>

using namespace std;

std::unordered_map<string, int> id;

int root(int x, int ID[]){
  while(x != ID[x]){
    // ID[x] = ID[ID[x]];
    x = ID[ID[x]];
  }
  return x;
}

void join(string s1, string s2, int ID[], int size[]){
  int rootX = root(id[s1], ID);
  int rootY = root(id[s2], ID);
  if(size[rootX] >= size[rootY] && rootX != rootY){
    ID[rootY] = rootX;
    size[rootX] += size[rootY];
  }
  else if(size[rootY] > size[rootX] && rootX != rootY){
    ID[rootX] = rootY;
    size[rootY] += size[rootX];
  }
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    id.clear();
    int N;
    std::cin >> N;
    string s1, s2;
    int ID[2*N + 1];
    int size[2*N + 1];
    int c = 1;
    while(N--){
      std::cin >> s1 >> s2;
      if(id[s1] == 0){
        id[s1] = c;
        ID[c] = c;
        size[c] = 1;
        c++;
      }
      if(id[s2] == 0){
        id[s2] = c;
        ID[c] = c;
        size[c] = 1;
        c++;
      }
      join(s1, s2, ID, size);
      std::cout << size[root(id[s1], ID)] << '\n';
      // std::cout << "ID = " << '\n';
      // for(int i = 1; i < c; i++)
      //   std::cout << ID[i] << ' ';
      // std::cout << "\nSize = " << '\n';
      // for(int i = 1; i < c; i++)
      //   std::cout << size[i] << ' ';
      // std::cout << '\n';
    }
  }
}
