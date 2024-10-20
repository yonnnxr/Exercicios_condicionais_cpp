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

    if (soma > 10) {
        std::cout << soma;
    }

}