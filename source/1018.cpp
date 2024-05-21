#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    int min = 64;
    std::vector<std::vector<char>> v(N, std::vector<char>(M));
    
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            std::cin >> v[i][j];
    
    for (int i = 0; i <= N - 8; ++i) {
        for (int j = 0; j <= M - 8; ++j) {
            int whiteDiff = 0;
            int blackDiff = 0;
            for (int y = i; y < i + 8; ++y) {
                for (int x = j; x < j + 8; ++x) {
                    if((x + y) % 2 == 0) {
                        if(v[y][x] == 'W') blackDiff++;
                        else whiteDiff++;
                    } else {
                        if(v[y][x] == 'B') blackDiff++;
                        else whiteDiff++;
                    }
                }
            }
            if (whiteDiff < min) min = whiteDiff;
            if (blackDiff < min) min = blackDiff;
        }
    }
    std::cout << min;
}
