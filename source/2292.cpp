#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    int divisor = 2;
    for (int i = 1; ; ++i) {
        if (N / divisor == 0) {
            std::cout << i;
            break;
        }
        divisor += i * 6;
    }
}
