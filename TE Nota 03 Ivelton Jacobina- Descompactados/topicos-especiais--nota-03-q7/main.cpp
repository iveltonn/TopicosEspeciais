#include <iostream>
using namespace std;

int main() {
    double PI = 3.14159; // Valor de Pi
    double raio, altura, volume;

    // Solicita ao usuário que insira o valor do raio e da altura da lata de óleo
    cout << "Insira o valor do raio da lata de óleo: ";
    cin >> raio;
    cout << "Insira o valor da altura da lata de óleo: ";
    cin >> altura;

    // Calcula o volume da lata de óleo
    volume = PI * raio * raio * altura;

    // Exibe o volume da lata de óleo
    cout << "O volume da lata de óleo é: " << volume << endl;

    return 0;
}
