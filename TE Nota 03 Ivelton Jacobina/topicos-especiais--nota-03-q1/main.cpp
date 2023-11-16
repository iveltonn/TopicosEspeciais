#include <iostream>

// Definindo a constante pi
const double pi = 3.14159;

int main() {
    // Declarando as variáveis
    double area, raio;

    // Solicitando ao usuário que insira o valor do raio
    std::cout << "Digite o valor do raio da circunferência: ";
    std::cin >> raio;

    // Calculando a área da circunferência
    area = pi * raio * raio;

    // Exibindo o resultado
    std::cout << "A área da circunferência é: " << area << std::endl;

    return 0;
}
