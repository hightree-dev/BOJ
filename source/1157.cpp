#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

int main() {
    char ch;
    std::string st;
    std::vector<int> v(26);
    while(std::cin >> ch) 
        v[std::tolower(ch) - 'a']++;
        
    auto max = std::max_element(v.begin(), v.end());
    auto it = std::find(v.begin(), v.end(), *max);
    auto it2 = std::find(it + 1, v.end(), *max);
    
    if(it2 == v.end())
        std::cout << static_cast<char>(std::distance(v.begin(), it) + 'A');
    else
        std::cout << "?";
}
