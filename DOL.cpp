#include <iostream>

using namespace std;

int main(){
  int t;
  long long int n;
  // std::cin >> t;
  // for(int i = 1; i <= t; i++){
    // unsigned long long int N;
    // std::cin >> N;
    // if(N%2 == 1)
    //   std::cout << N << '\n';
    // else{
    //   while(N){
    //     if((N/2) % 2 == 1){
    //       std::cout << "Case " << i << ": " << N/2 << '\n';
    //       break;
    //     }
    //     else
    //       N /= 2;
    //   }
    // }
    cin >> t;
for(int c = 0; c < t; c ++){
    cin >> n;
    while(n % 2 == 0)
        n /= 2;
    cout << "Case " << c + 1 << ": " << n << endl;
}
  }
