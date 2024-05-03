#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> v(N);

    for (int i = 0; i < N; ++i)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end(), std::less<int>());

    for (const int n : v)
        std::cout << n << '\n';
}