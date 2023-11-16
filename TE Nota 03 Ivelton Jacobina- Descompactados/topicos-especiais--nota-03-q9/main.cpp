#include <iostream>

int main() {
    int A, B, temp;

    std::cout << "Digite o valor de A: ";
    std::cin >> A;

    std::cout << "Digite o valor de B: ";
    std::cin >> B;

    // Troca dos valores usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    std::cout << "Depois da troca:" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    return 0;
}
