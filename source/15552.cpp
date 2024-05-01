#include <iostream>

int main() {
    int T;

    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int A, B;
        std::cin >> A >> B;
        std::cout << A + B << '\n';
    }
}