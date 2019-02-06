#include <bits/stdc++.h>

using namespace std;

bool isPrime(string s){
  int number = stoi(s);
  int sq = sqrt(number);
  int c = 0;
  for(int i = 2; i <= sq; i++){
    if(number%i == 0){
      c++;
      break;
    }
  }
  if(c==0)
    return true;
  return false;
}

void bfs(string start, string end){
  std::map<string, int> moves;
  std::map<string, bool> visited;
  queue<string> Q;
  Q.push(start);
  visited[start] = true;
  bool Impossible = true;
  bool out = false;
  string temp, s;
  while(!Q.empty()){
    s = Q.front();
    Q.pop();
    if(s == end){
    Impossible = false;
      break;
    }
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 4; j++){
        temp = s;
        if(i == 0 && j == 0)
          continue;
        temp[j] = to_string(i).c_str()[0];
        // temp[j] = end[i];
        // std::cout << temp << '\n';
        if(visited[temp])
          continue;
        visited[temp] = true;
        if(isPrime(temp)){
          moves[temp] = moves[s] + 1;
          Q.push(temp);
          if(temp == end){
            out = true;
            break;
          }
          // std::cout << "Pushed Value = " << temp << '\n';
        }
      }
      if(out)
        break;
    }
    if(out)
      break;
    // std::cout << "Queue Size = " << Q.size() << '\n';
  }
  if(moves[end] != 0)
    std::cout << moves[end] << '\n';
  else if(!Impossible)
    std::cout << moves[end] << '\n';
  else
    std::cout << "Impossible" << '\n';
}

int main(){
  int t;
  string start, end;
  std::cin >> t;
  while(t--){
    std::cin >> start >> end;
    bfs(start, end);
  }
}
