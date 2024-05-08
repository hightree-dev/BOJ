#include <iostream>
#include <cmath>

bool isPrime(int number) {;
    if (number == 1)
        return false;
    int max = sqrt(number);
    for (int i = 2; i <= max; ++i)
        if(number % i == 0)
            return false;
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, number, count = 0;
    std::cin >> N;
    
    while(N--) {
        std::cin >> number;
        if(isPrime(number))
            count++;
    }
    
    std::cout << count;
}
