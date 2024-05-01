#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int A, B;
        std::cin >> A >> B;
        std::cout << A + B << '\n';
    }
}