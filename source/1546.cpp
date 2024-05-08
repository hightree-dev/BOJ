#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int N;
    double max, sum, avg;

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> N;
    std::vector<double> v(N);
    
    for (int i = 0; i < N; ++i) 
        std::cin >> v[i];
    
    max = *std::max_element(v.begin(), v.end());
    std::transform(v.cbegin(), v.cend(), v.begin(), [max](double n) { return n / max * 100.0; });
    
    sum = std::accumulate(v.begin(), v.end(), 0.0);
    avg = sum / (double) v.size();
    
    std::cout << avg;
}
