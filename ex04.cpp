#include <iostream>

int main() {
    int x;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    if (x > 0) {
        std::cout << "Positivo";
    }
    else if (x < 0){
        std::cout << "Negativo";
    }
    else {
        std::cout << "Nulo";
    }
}