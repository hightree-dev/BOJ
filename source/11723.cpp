#include <iostream>
#include <string>
#include <set>

int main() {
  int M, x;
  std::set<int> s;
  std::string op;
  
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> M;

  for (int i = 0; i < M; ++i) {
    std::cin >> op;
    if (op == "all") {
      s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    } 
    else if (op == "empty") {
      s.clear();
    }
    else {
      std::cin >> x;
      if (op == "add") {
        s.insert(x);
      }
      else if (op == "remove") {
        s.erase(x);
      }
      else if (op == "check") {
        auto search = s.find(x);
        if (search != s.end())
          std::cout << 1;
        else
          std::cout << 0;
        std::cout << '\n';
      }
      else if (op == "toggle") {
        auto search = s.find(x);
        if (search != s.end())
          s.erase(x);
        else
          s.insert(x);
      }
    }
  }
}
