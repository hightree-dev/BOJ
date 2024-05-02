#include <iostream>
#include <vector>

int main() {
    int N, M, number;
    std::cin >> N >> M;

    std::vector<int> m(N * M);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> number;
            m[i * M + j] = number;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> number;
            m[i * M + j] += number;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << m[i * M + j] << ' ';
        }
        std::cout << '\n';
    }
        
}