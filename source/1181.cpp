#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> v(N);
    
    for (int i = 0; i < N; ++i)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end(), [](std::string a, std::string b) {
        if (a.length() == b.length()) 
            return a < b; 
        else 
            return a.length() < b.length();
    });

    std::cout << v[0] << '\n';
    for (int i = 0; i < N - 1; ++i)
        if(v[i] != v[i + 1])
            std::cout << v[i + 1] << '\n';

}