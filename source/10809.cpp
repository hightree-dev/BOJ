#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    char ch;
    int idx = 0;
    std::vector<int> v(26, -1);

    while(std::cin >> ch) {
        int curIdx = ch - 'a';
        if(v[curIdx] == -1)
            v[curIdx] = idx;
        idx++;
    }
    
    for(const int n : v)
        std::cout << n << ' ';
}
