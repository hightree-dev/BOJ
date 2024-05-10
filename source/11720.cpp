#include <iostream>
#include <cstdlib>

int main() {
    int N, sum = 0;
    char c;
    std::cin >> N;
    while(N--) {
        std::cin >> c;
        sum += c - '0';
    }
    std::cout << sum;
}
