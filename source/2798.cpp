#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, M;
    std::cin >> N >> M;
    std::vector<int> v(N);
    
    for(int i = 0; i < N; ++i)
        std::cin >> v[i];
    
    int max = 0;
    for(int i = 0; i < N - 2; ++i)
        for(int j = i + 1; j < N - 1; ++j)
            for(int k = j + 1; k < N; ++k) {
                int sum = v[i] + v[j] + v[k];
                if(sum <= M && max < sum)
                    max = sum;
            }
    
    std::cout << max;
    
}
