#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int t = 1;
  while(true){
    getline(cin, s);
    if(s.find('-') != string::npos)
      break;
    stack<int> S;
    int count = 0, l = s.length();
    for(int i = 0; i < l; i++){
      if(s[i] == '{' || s[i] == '}'){
        if(S.empty())
          S.push(s[i]);
        else{
          if(S.top() == '{' && s[i] == '}')
            S.pop();
          else
            S.push(s[i]);
        }
      }
    }
      double open = 0, close = 0;
      for(int i = 0; !S.empty(); i++){
        if(S.top() == '{')
          open += 1;
        else
          close += 1;
        S.pop();
      }
      count = ceil(open/2) + ceil(close/2);
      std::cout << t << ". " << count << '\n';
      t++;
    }
  }
