#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    long long int stations, limit, j = 0, maxHumans = 0, count = 0, maxStations = 0, ans = 0;
    std::cin >> stations >> limit;
    int humans[stations];
    for(int i = 0; i < stations; i++){
      std::cin >> humans[i];
    }
    long long int i = 0;
    while(j < stations){
      if(i < stations){
        ans += humans[i];
        count++;
      }
      // std::cout << "ans:- " << ans << '\n';
      // std::cout << "count:- " << count << '\n';
      while(ans > limit){
        // std::cout << "1st if" << '\n';
        ans -= humans[j++];
        count--;
        // std::cout << "new ans:- " << ans << '\n';
        // std::cout << "new count:- " << count << '\n';
      }
      if(ans <= limit){
        // std::cout << "2nd if" << '\n';
        if(maxStations < count){
          // std::cout << "3rd if" << '\n';
          maxStations = count;
          // std::cout << "maxStations:- " << maxStations << '\n';
          maxHumans = ans;
          // std::cout << "maxHumans:- " << maxHumans << '\n';
        }
        else if(maxStations == count){
          // std::cout << "4th if" << '\n';
          if(maxHumans > ans){
            maxHumans = ans;
            // std::cout << "maxHumans:- " << maxHumans << '\n';
            // std::cout << "5th if" << '\n';
          }
        }
      }
      if(i <= stations-1)
        i++;
      else
        j++;
      // std::cout << "i = " << i << '\n';
      // std::cout << "j = " << j << '\n';
    }
    std::cout << maxHumans << " " << maxStations << '\n';
  }
}
