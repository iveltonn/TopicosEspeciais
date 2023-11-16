#include <iostream>

int main() {
    float base, altura, area;

    // Solicitando a entrada do usuário para base e altura
    std::cout << "Digite a base do triângulo: ";
    std::cin >> base;

    std::cout << "Digite a altura do triângulo: ";
    std::cin >> altura;

    // Calculando a área do triângulo
    area = (base * altura) / 2;

    // Mostrando o resultado
    std::cout << "A área do triângulo é: " << area << std::endl;

    return 0;
}
