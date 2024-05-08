#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, num, count;
    std::cin >> N;
    
    std::map<int, int> m;
    for(int i = 0; i < N; ++i) {
        std::cin >> num;
        m[num]++;
    }
    
    std::cin >> N;
    for(int i = 0; i < N; ++i) {
        std::cin >> num;
        std::cout << m[num] << ' ';
    }   
}
