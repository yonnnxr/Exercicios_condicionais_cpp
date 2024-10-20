#include <iostream>

int main() {
    int x;
    int y;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    std::cout << "Insira o numero y: ";
    std::cin >> y;
    
    if (x > y) {
        std::cout << x << " e maior que " << y;
    }
    else if (x < y) {
        std::cout << x << " e menor que " << y;
    }
    else {
        std::cout << "São o mesmo numero";
    }

}