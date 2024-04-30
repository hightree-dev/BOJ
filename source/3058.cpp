#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        std::vector<int> v;

        for (int j = 0; j < 7; ++j) {
            std::cin >> num;
            if (!(num & 1))
                v.push_back(num);
        }

        std::cout << std::accumulate(v.begin(), v.end(), 0) << ' '
                  << *std::min_element(v.begin(), v.end()) << std::endl;
    }    
}