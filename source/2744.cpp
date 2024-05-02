#include <iostream>
#include <cctype>

int main() {
    char ch;
    while(std::cin >> ch) {
        if(isupper(ch)) std::cout << static_cast<char>(tolower(ch));
        else std::cout << static_cast<char>(toupper(ch));
    }
}