#include <iostream>

int main() {
    char ch;
    int count = 0;
    while(std::cin >> ch)
        count++;
    std::cout << count;
}