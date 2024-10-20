#include <iostream>

int main() {
    int x;
    int s;
    int z;

    std::cout << "Insira o numero x: ";
    std::cin >> x;

    
    s = x % 3;
    z = x % 7;

    if (s == 0 and z == 0) {
        std::cout << x << " e multiplo de 3 e de 7";
    }
    else {
        std::cout << x << " nao e multiplo de 3 e de 7";
    }

}