#include <iostream>
#include <set>

int main() {
  int N, M, num;

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::set<int> s;
  std::cin >> N;
  
  while(N--) {
    std::cin >> num;
    s.insert(num);
  }

  std::cin >> M;
  while(M--) {
    std::cin >> num;
    auto search = s.find(num);
    if (search != s.end())
      std::cout << 1;
    else
      std::cout << 0;
    std::cout << '\n';
  }
}
