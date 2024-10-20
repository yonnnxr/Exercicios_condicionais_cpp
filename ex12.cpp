#include <iostream>

int main () {
    double SalarioBruto;
    double Prestacao;
    double Maxprestacao;

    std::cout << "Insira o valor do salario: ";
    std::cin >> SalarioBruto;

    std::cout << "Insira o valor da prestacao: ";
    std::cin >> Prestacao;

    Maxprestacao = SalarioBruto * 0.30;
    if (Maxprestacao >= Prestacao) {
        std::cout << "Pode ser Realizado";
    }
    else {
        std::cout << "Nao pode ser realizado";
    }
}