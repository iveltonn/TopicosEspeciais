#include <iostream>

int main() {
    int valor;
    
    // Leitura do valor inteiro
    std::cout << "Digite um valor inteiro: ";
    std::cin >> valor;

    // Cálculo do quadrado e do cubo
    int quadrado = valor * valor;
    int cubo = valor * valor * valor;

    // Apresentação dos resultados
    std::cout << "O quadrado de " << valor << " é: " << quadrado << std::endl;
    std::cout << "O cubo de " << valor << " é: " << cubo << std::endl;

    return 0;
}
