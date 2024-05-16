#include <iostream>

int main() {
    bool isAcending;
    
    int num;
    std::cin >> num;
    
    if(num == 1)
        isAcending = true;
    else if(num == 8)
        isAcending = false;
    else {
        std::cout << "mixed";
        return 0;
    }
    
    for(int i = 2; i <= 8; ++i) {
        std::cin >> num;
        if(!(isAcending && num == i || !isAcending && num == 9 - i)) {
            std::cout << "mixed";
            return 0;
        }
    }
    
    if(isAcending)
        std::cout << "ascending";
    else
        std::cout << "descending";
}
