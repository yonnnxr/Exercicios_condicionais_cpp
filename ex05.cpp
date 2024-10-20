#include <iostream>

int main() {
    int x;
    int y;
    int soma;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    std::cout << "Insira o numero y: ";
    std::cin >> y;

    soma = x + y;

    if (soma > 20) {
        soma = soma + 8;
        std::cout << soma;
    }
    else {
        soma = soma - 5;
        std::cout << soma;
    }
}