#include <iostream>

int main() {
    int y;
    int soma;

    std::cout << "Insira o numero x: ";
    std::cin >> y;

    soma = y % 2;

    if (soma == 0) {
        std::cout << "Par";
    }
    else {
        std::cout << "Impar";
    }
}