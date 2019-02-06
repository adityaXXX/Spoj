#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  string str, v;
  std::cin >> t;
  while(t--){
    std::cin >> v;
    std::cin >> str;
    int i = 0, ls = str.length(), j = 0, lk = v.length(), c = 1, temp = 0;
    while(i < ls){
      if(c == 1){
        if(j < lk){
          temp = str[i] - (v[j++] - '0');
          if (temp < 97){
            std::cout << (char)(123 - (97 - temp));
          }
          else
          std::cout << (char)temp;
        }
        else{
          j = lk-1;
          temp = str[i] - (v[j--] - '0');
          if (temp < 97){
            std::cout << (char)(123 - (97 - temp));
          }
          else
          std::cout << (char)temp;
          c *= -1;
        }
      }
      else if(c == -1){
        if(j >= 0){
          temp = str[i] - (v[j--] - '0');
          if (temp < 97){
            std::cout << (char)(123 - (97 - temp));
          }
          else
          std::cout << (char)temp;
        }
        else{
          j = 0;
          temp = str[i] - (v[j++] - '0');
          if (temp < 97){
            std::cout << (char)(123 - (97 - temp));
          }
          else
          std::cout << (char)temp;
          c *= -1;
        }
      }
      i++;
    }
    std::cout << '\n';
  }
}
