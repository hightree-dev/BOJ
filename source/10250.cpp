#include <iostream>

int main() {
    int T, W, H, N;

    std::cin >> T;
    while(T--) {
        std::cin >> H >> W >> N;
        int room = N / H + 1;
        int floor = N % H;
        
        if (floor == 0) {
            floor = H;
            room -= 1;
        }
        
        std::cout << floor * 100 + room << '\n';
    }
}
