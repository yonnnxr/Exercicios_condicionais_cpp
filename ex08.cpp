#include <iostream>

int main() {
    int x;
    int s;
    std::cout << "Insira o numero x: ";
    std::cin >> x;

    s = x % 5;

    if (s == 0) {
        std::cout << "e multiplo de 5";
    }
    else {
        std::cout << "nao e multiplo de 5";
    }

}