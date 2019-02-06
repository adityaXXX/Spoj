#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  std::cin >> t;
  while(t--){
    int n, m, temp;
    std::cin >> n >> m;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
      std::cin >> temp;
      v.push_back(temp);
    }
    int front = 0, target = v[m], MAX, d, ans = 0;
    MAX = *max_element(v.begin(), v.end());
    if(MAX == target && front == m){
      std::cout << ++ans << '\n';
      continue;
    }
    while(true){
      MAX = *max_element(v.begin() + front, v.end());
      d = distance(v.begin(), max_element(v.begin() + front, v.end())) - front;
      // std::cout << "d = " << d << '\n';
      if(MAX == target &&  d == m){
        // std::cout << "1st if" << '\n';
        ans++;
        // std::cout << "ans : " << ans << '\n';
        m -= d;
        break;
      }
      else if(MAX == target && d != m){
        rotate(v.begin() + front, v.begin() + front + d, v.end());
        // std::cout << "2nd if" << '\n';
        // std::cout << "After rotation" << '\n';
        // for(int j = front; j < n; j++)
          // std::cout << v[j] << ' ';
        // std::cout << '\n';
        ans++;
        // std::cout << "ans : " << ans << '\n';
        front++;
        // std::cout << "front : " << front <<  '\n';
        m -= d;
      }
      else if(MAX != target){
        rotate(v.begin() + front, v.begin() + front + d, v.end());
        // std::cout << "3rd if" << '\n';
        // std::cout << "After rotation" << '\n';
        // for(int j = front; j < n; j++)
          // std::cout << v[j] << ' ';
        // std::cout << '\n';
        ans++;
        // std::cout << "ans : " << ans << '\n';
        front++;
        // std::cout << "front : " << front <<  '\n';
        m -= d;
      }
      if(m < 0)
      m += (n-front);
      else
        m--;
      // std::cout << "m = " << m << '\n';
    }
    std::cout << ans << '\n';
  }
}
