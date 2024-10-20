#include <iostream>

int main() {
    int x;
    int y;
    int s;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    std::cout << "Insira o numero y: ";
    std::cin >> y;
    
    s = x % y;

    if (s == 0) {
        std::cout << x << "e multiplo de " << y;
    }
    else {
        std::cout << x << "e multiplo de " << y;
    }

}