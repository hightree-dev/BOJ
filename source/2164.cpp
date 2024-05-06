#include <iostream>
#include <queue>

int main() {
  int N;
  std::queue<int> q;

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
  
  std::cin >> N;

  if (N == 1) {
    std::cout << 1;
    return 0;
  }
    
  for (int i = 2; i <= N; i += 2)
    q.push(i);
  
  if (N & 1) {
    q.push(q.front());
    q.pop();
  }

  while(q.size() > 1) {
    q.pop();
    q.push(q.front());
    q.pop();
  }

  std::cout << q.front();

}
