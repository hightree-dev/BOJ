#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, num, count;
    std::cin >> N;
    
    std::vector<int> v(N);
    for(int i = 0; i < N; ++i)
        std::cin >> v[i];
        
    std::sort(v.begin(), v.end());
    
    std::cin >> N;
    for(int i = 0; i < N; ++i) {
        count = 0;
        std::cin >> num;
        auto p = std::lower_bound(v.begin(), v.end(), num);
        for(; p != v.end(); ++p) {
            if(*p != num)
                break;
            count++;
        }
        std::cout << count << ' ';
    }
    
}
