#include <iostream>
#include <string>
#include <stack>

int main() {
    int N, operand;
    std::string op;
    std::stack<int> s;
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cin >> N;
    
    while(N--) {
        std::cin >> op;
        if (op == "push") {
            std::cin >> operand;
            s.push(operand);
        }
        else if (op == "pop") {
            if (s.size() == 0)
                std::cout << -1 << '\n';
            else {
                std::cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (op == "size") {
            std::cout << s.size() << '\n';
        }
        else if (op == "empty") {
            if (s.size() == 0)
                std::cout << 1 << '\n';
            else
                std::cout << 0 << '\n';
        }
        else if (op == "top") {
            if (s.size() == 0)
                std::cout << -1 << '\n';
            else
                std::cout << s.top() << '\n';
        }
    }
}
