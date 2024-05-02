#include <iostream>
#include <string>

int main() {
    int T;
    std::string str;
    std::cin >> T;
    
    while(T--) {
        std::cin >> str;
        std::cout << str[0] << str[str.length() - 1] << '\n';
    }
}