#include <iostream>

int main() {
    int N, result = 1;
    std::cin >> N;
    for (int i = 1; i <= N; ++i)
        result *= i;
    std::cout << result;
}