#include <iostream>
#include <string>
#include <queue>

int main() {
  int N, operand;
  std::string op;
  std::queue<int> q;

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  
  std::cin >> N;

  while(N--) {
    std::cin >> op;
    if (op == "push") {
      std::cin >> operand;
      q.push(operand);
    }
    else if (op == "pop") {
      if(q.size() == 0)
        std::cout << -1 << '\n';
      else {
        std::cout << q.front() << '\n';
        q.pop();
      }
        
    }
    else if (op == "size") {
      std::cout << q.size() << '\n';
    }
    else if (op == "empty") {
      if (q.size() > 0)
        std::cout << 0 << '\n';
      else
        std::cout << 1 << '\n';
    }
    else if (op == "front") {
      if (q.size() == 0)
        std::cout << -1 << '\n';
      else
        std::cout << q.front() << '\n';
    }
    else if (op == "back") {
      if (q.size() == 0)
        std::cout << -1 << '\n';
      else
        std::cout << q.back() << '\n';
    }
  }
}
