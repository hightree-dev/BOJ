#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;
    
    for(int i = N - 1; i >= 0; --i) {
        for (int j = 0; j < N; ++j) {
            if (j >= i)
                std::cout << '*';
            else
                std::cout << ' ';
        }
        std::cout << '\n';
    }
}
