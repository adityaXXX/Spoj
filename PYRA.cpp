#include <bits/stdc++.h>

using namespace std;

void dfs(std::vector<int> v[], int parent, bool visited[], int count[]){
	if(!visited[parent]){
		visited[parent] = true;
	}
	for(int i = 0; i < v[parent].size(); i++){
		if(visited[v[parent][i]] == false){
			dfs(v, v[parent][i], visited, count);
		}
	}
	if(v[parent].size() == 1 && parent != 0){
		// std::cout << "1 is set for " << parent << '\n';
		count[parent] = 1;
	}
	else{
		// std::cout << "Lower loop for = " << parent << '\n';
		int children = 0;
		for(int i = 0; i < v[parent].size(); i++){
			count[parent] += count[v[parent][i]];
			if(count[v[parent][i]] != 0){
				children++;
			}
		}
		// std::cout << "count before = " << count[parent] << '\n';
		count[parent] += children + 1;
		// std::cout << "count after = " << count[parent] << '\n';
	}
}

int main(){
	int t, n;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		int count[n] = {0};
		std::vector<int> v[n];
		int a, b;
		for(int i = 0; i < n-1; i++){
			std::cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		bool visited[n] = {false};
		dfs(v, 0, visited, count);
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans += count[i];
		}
		// for(int i = 0; i < n; i++){
		// 	std::cout << "count[" << i << "] = " << count[i] << '\n';
		// }
		std::cout << ans << '\n';
	}
}
