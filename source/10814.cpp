#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, age;
    std::string name;
    std::map<int, std::vector<std::string>> m;
    std::cin >> N;
    
    while(N--) {
        std::cin >> age >> name;
        m[age].push_back(name);
    }
    
    for (const auto& [key, value] : m)
        for (const  auto& name: value)
            std::cout << key << ' ' << name << '\n';
}
