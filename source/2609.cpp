#include <iostream>

int main() {
    int A, B, X, Y, Z;

    std::cin >> A >> B;
    X = A;
    Y = B;
    while(X % Y) {
        Z = Y;
        Y = X % Y;
        X = Z;
    }

    int factor = Y;

    std::cout << factor << '\n';
    std::cout << A * B / factor;
}
