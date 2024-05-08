#include <iostream>
#include <vector>


void bubbleSort(std::vector<int>& v, int S) {
    int N = v.size();
    int count = 0;
    int temp;
    
    for (int i = N - 1; i > 0; --i) {
        for (int j = 0; j < i; j++) {
            if (v[j] < v[j + 1]) {
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
                count++;
                if (count == S) {
                    return;
                }
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N, S;
    std::cin >> N;
    std::vector<int> v(N);

    for(int i = 0; i < N; ++i)
        std::cin >> v[i];
    
    std::cin >> S;
    bubbleSort(v, S);    
    
    for (const int n : v)
        std::cout << n << ' ';
}
