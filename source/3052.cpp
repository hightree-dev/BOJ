#include <iostream>
#include <map>

int main() {
    int n;
    std::map<int, int> m;
    
    for(int i = 0; i < 10; ++i) {
        std::cin >> n;
        m[n % 42]++;
    }
    
    std::cout << m.size();
}
