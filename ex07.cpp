#include <iostream>

int main() {
    int x;
    int s;
    std::cout << "Insira o numero x: ";
    std::cin >> x;

    s = x % 3;

    if (s == 0) {
        std::cout << "e multiplo de 3";
    }
    else {
        std::cout << "nao e multiplo de 3";
    }

}