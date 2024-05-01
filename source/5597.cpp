#include <iostream>

int main() {
    int arr[30] = { 0, };

    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    for (int i = 0; i < 28; ++i) {
        int num;
        std::cin >> num;
        arr[num - 1] = 1; 
    }

    for (int i = 0; i < 30; ++i)
        if (arr[i] == 0)
            std::cout << i + 1 << '\n';
}