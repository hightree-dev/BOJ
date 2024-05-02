#include <iostream>

int main() {
    char alpha, symbol;
    double score;
    std::cin >> alpha;

    std::cout.precision(1);
    if(alpha == 'F') {
        std::cout << std::fixed << 0.0 << std::endl;
        return 0;
    }
        
    std::cin >> symbol;
    if(alpha == 'A') score = 4;
    else if(alpha == 'B') score = 3;
    else if(alpha == 'C') score = 2;
    else if(alpha == 'D') score = 1;
    

    if(symbol == '+') score += 0.3;
    else if(symbol == '-') score -= 0.3;

    std::cout << std::fixed << score;
}