#include <bits/stdc++.h>

using namespace std;

std::vector<long long int> v;
std::unordered_map<int, int> occur;

void ans(bool flag, long long int n){
  if(flag == true){
    // std::cout << "INSERT" << '\n';
    v.push_back(n);
    occur[n]++;
  }
  else if(flag == false){
    // std::cout << "DELETE" << '\n';
    for(auto i = v.begin(); i != v.end(); i++){
      // std::cout << *i << '\n';
      if(*i == n){
        occur[*i]--;
        if(occur[*i] == 0)
          occur.erase(*i);
        v.erase(i);
        break;
      }
    }
  }
  // std::cout << "MAP => " << '\n';
  // for(auto i = occur.begin(); i != occur.end(); i++){
  //   std::cout << "first = " << i->first << " second = " << i->second << '\n';
  // }
  if(occur.size() >= 1){
    if(occur.size() == 1){
      if(occur.begin()->second > 1)
        std::cout << "homo" << '\n';
      else
        std::cout << "neither" << '\n';
    }
    else{
      bool h = false;
      for(auto i = occur.begin(); i != occur.end(); i++){
        if(i->second > 1){
          h = true;
          break;
        }
      }
      if(h)
        std::cout << "both" << '\n';
      else
        std::cout << "hetero" << '\n';
    }
  }
  else
    std::cout << "neither" << '\n';
}

int main(){
  int n;
  std::cin >> n;
  n++;
  while(n--){
    string s;
    getline(cin, s);
    if(s.substr(0, 6) == "insert")
      ans(true, stoi(s.substr(6)));
    else if(s.substr(0, 6) == "delete")
      ans(false, stoi(s.substr(6)));
  }
}
