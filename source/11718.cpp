#include <iostream>
#include <string>

int main() {
    std::string str;

    while(getline(std::cin, str))
        std::cout << str << '\n';
}