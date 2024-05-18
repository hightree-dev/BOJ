#include <iostream>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    short num;
    
    std::cin >> N;
    
    std::map<short, int> m;
    
     for (int i = 0; i < N; ++i) {
         std::cin >> num;
         m[num]++;
     }
     
     for (const auto [n, c] : m)
        for(int i = 0; i < c; ++i)
            std::cout << n << '\n';
}
