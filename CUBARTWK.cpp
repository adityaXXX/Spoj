#include <bits/stdc++.h>

using namespace std;

int main(){
  int h, w;
  while(true){
    std::cin >> h >> w;
    if(h == 0 && w == 0)
      break;
    int a[h], b[w];
    int count1[21] = {0};
    int count2[21] = {0};
    for(int i = 0; i < h; i++){
      std::cin >> a[i];
      count1[a[i]]++;
    }
    for(int i = 0; i < w; i++){
      std::cin >> b[i];
      count2[b[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < 21; i++){
      int m = min(count1[i], count2[i]);
      ans = ans + m*i + i*(count1[i]-m) + i*(count2[i]-m);
    }
    std::cout << ans << '\n';
  }
}
