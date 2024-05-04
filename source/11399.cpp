#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
  int N, num;
  std::cin >> N;

  std::vector<int> v(N);

  for (int i = 0; i < N; ++i) {
    std::cin >> num;
    v[i] = num;
  }

  std::sort(v.begin(), v.end());
  std::partial_sum(v.cbegin(), v.cend(), v.begin());
  int sum = std::accumulate(v.begin(), v.end(), 0);
  std::cout << sum;
}
