#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;
    std::vector<int> v(N);
    
    for(int i = 0; i < N; ++i)
        std::cin >> v[i];
        
    const auto [min, max] = std::minmax_element(v.begin(), v.end());
    std::cout << *min << ' ' << *max;
}
