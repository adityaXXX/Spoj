#include <iostream>

int main(){
  long long int n, ans = 0, temp, prev;
  std::cin >> n;
  for(int i = 0; i < n; i++){
    if(i == 0){
      std::cin >> prev;
      continue;
    }
    std::cin >> temp;
    if(prev > temp){
      ans += prev;
    }
    else{
      ans += temp;
    }
    prev = temp;
  }
  std::cout << ans << '\n';
}
