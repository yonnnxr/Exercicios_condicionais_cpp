#include <iostream>
#include <cmath>

int main() {
    double x;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    if (x >= 0) {
        std::cout << std::pow(x,0.5);
    }
    else {
        std::cout << std::pow(x,2);
    }
}