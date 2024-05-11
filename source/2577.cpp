#include <iostream>
#include <array>
#include <string>

int main() {
    long long num, sum = 1;
    
    for(int i = 0; i < 3; ++i) {
        std::cin >> num;
        sum *= num;
    }
    
    std::array<int, 10> arr {0};
    std::string s = std::to_string(sum);
    
    for(const char c : s)
        ++arr[c - '0'];
    
    for(const int n : arr)
        std::cout << n << '\n';
}
