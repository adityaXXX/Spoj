#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n;
  while(true){
    std::cin >> n;
    if(n == 0)
      break;
    int a[n];
    for(int i = 0; i < n; i++)
      std::cin >> a[i];
    stack<int> s;
    int j = 1, count = 0;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
      if(a[i] == j){
        v.push_back(a[i]);
        j++;
      }
      else{
        if(s.empty()){
          s.push(a[i]);
        }
        else{
          while(!s.empty()){
            if(j != s.top())
              break;
            v.push_back(s.top());
            s.pop();
            j++;
          }
          s.push(a[i]);
        }
      }
    }
    for(int i = 0; (!s.empty()); i++){
      v.push_back(s.top());
      s.pop();
    }
    j = 1;
    for(int i = 0; i < n; i++){
      if(j == v[i]){
        count++;
        j++;
      }
      else
        break;
    }
    if(count == n)
      std::cout << "yes" << '\n';
    else
      std::cout << "no" << '\n';
  }
}
