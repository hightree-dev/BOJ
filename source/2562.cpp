#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v(9);
    
    for(int i = 0; i < 9; ++i)
        std::cin >> v[i];
        
    auto result = std::max_element(v.begin(), v.end());
    std::cout << *result << '\n';
    std::cout << std::distance(v.begin(), result) + 1;
}
