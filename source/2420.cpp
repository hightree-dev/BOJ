#include <iostream>

int main() {
    long N, M, result;
    std::cin >> N >> M;
    result = N - M;
    if (result < 0)
        result *= -1;
    std::cout << result;
}