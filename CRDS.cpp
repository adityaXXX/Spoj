#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int a;
		cin >> a;
    if(a == 1){
      a = 3;
      std::cout << a << '\n';
      continue;
    }
		a = ((a * (a + 1)) + (a * (a - 1))/2) % 1000007;
		cout << a << endl;
	}
	return 0;
}
