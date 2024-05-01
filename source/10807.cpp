#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, v;
    std::cin >> N;

    std::vector<int> vec(N);
    
    for (int i = 0; i < N; ++i)
        std::cin >> vec[i];
    
    std::cin >> v;
    std::cout << std::count(vec.begin(), vec.end(), v);
}