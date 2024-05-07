#include <iostream>
#include <string>
#include <deque>

int main() {
    int N, operand;
    std::string op;
    std::deque<int> d;
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cin >> N;
    
    while(N--) {
        std::cin >> op;
        if (op == "push_front") {
            std::cin >> operand;
            d.push_front(operand);
        }
        else if (op == "push_back") {
            std::cin >> operand;
            d.push_back(operand);
        }
        else if (op == "pop_front") {
            if (d.size() == 0) {
                std::cout << -1 << '\n';
            }
            else {
                std::cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (op == "pop_back") {
            if (d.size() == 0) {
                std::cout << -1 << '\n';
            }
            else {
                std::cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (op == "size") {
            std::cout << d.size() << '\n';
        }
        else if (op == "empty") {
            if (d.size() == 0)
                std::cout << 1 << '\n';
            else
                std::cout << 0 << '\n';
        }
        else if (op == "front") {
            if (d.size() == 0)
                std::cout << -1 << '\n';
            else
                std::cout << d.front() << '\n';
        }
        else if (op == "back") {
            if (d.size() == 0)
                std::cout << -1 << '\n';
            else
                std::cout << d.back() << '\n';
        }
    }
}
