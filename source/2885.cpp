#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int H, M;
    std::cin >> H >> M;
    
    if(M - 45 < 0) {
        M += 15;
        if(H == 0) H = 23;
        else H--;
    } else {
        M -= 45;
    }
    std::cout << H << ' ' << M;
}
