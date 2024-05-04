#include <iostream>

int main(){
  long long a, b, c;
  while(std::cin >> a >> b >> c) {
    if (a == 0 && b == 0 && c == 0)
      break;
    
    long long a2 = a * a;
    long long b2 = b * b;
    long long c2 = c * c;

    if (a2 + b2 == c2 ||
        a2 + c2 == b2 ||
        b2 + c2 == a2)
      std::cout << "right";
    else
      std::cout << "wrong";
    
    std::cout << '\n';
  }
}
