#include <iostream>

int main() {
    int num, res = 0;
    while(std::cin >> num)
        res += num * num;
    std::cout << res % 10;
}