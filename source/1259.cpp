#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    std::string str;
    
    while(std::cin >> str) {
        if (str == "0")
            break;
        
        bool isPalindrome = true;
        int len = str.length();
        for (int i = 0; i < len / 2; ++i) {
            if(str[i] != str[len - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome)
            std::cout << "yes" << '\n';
        else
            std::cout << "no" << '\n';
    }
}
