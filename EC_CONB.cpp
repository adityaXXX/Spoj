#include <bits/stdc++.h>
using namespace std;

string toBinary(int a){
  string s;
  if(a == 0)
  s = "0";
  while(a != 0){
    int r = a % 2;
    string k = to_string(r);
    s.append(k);
    a /= 2;
  }
  reverse(s.begin(), s.end());
  return s;
}

int toString(string a, int l){
  int ans = 0;
  // std::cout << "adding" << '\n';
  for(int i = 0; i < l; i++){
    if(a[i] == '1'){
      // std::cout << (int)pow(2, l-i-1) << '\n';
      ans += (int)pow(2, l-i-1);
    }
  }
  // std::cout << "done" << '\n';
  return ans;
}

int main(){
  int t;
  std::cin >> t;
  while(t--){
    string s;
    int a;
    std::cin >> a;
    if(a % 2 == 1){
      std::cout << a << '\n';
      continue;
    }
    s = toBinary(a);
    reverse(s.begin(), s.end());
    // int l = s.length();
    // std::cout << "Binary :-" << s << '\n';
    // char Ans[l+1] = {0};
    // for(int i = 0; i < l-1; i++){
    //   Ans[i] = s[i+1];
    // }
    // Ans[l-1] = s[0];
    // std::cout << "Rotated:- "  << Ans << '\n';
    int ans = toString(s, s.length());
    std::cout << ans << '\n';
  }
  return 0;
}
