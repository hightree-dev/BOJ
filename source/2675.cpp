#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int T, R;
    std::string str;
    std::cin >> T;
    
    while(T--) {
        std::cin >> R >> str;
        for(const char c : str)
            for(int i = 0; i < R; ++i)
                std::cout << c;
        std::cout << '\n';
    }
}
