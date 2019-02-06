#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n;
    std::map<string, int> number;
    std::cin >> n;
    string s;
    for(int i = 0; i < n; i++){
      getline(cin, s);
      number[s]++;
    }
    for(auto itr = number.begin();itr!=number.end();itr++)
    {
      cout<<itr->first<<" "<<itr->second<<'\n';
    }
    std::cout << '\n';
  }
}
