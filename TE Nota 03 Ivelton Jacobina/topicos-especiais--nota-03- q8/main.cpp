#include <iostream>

using namespace std;

int main() {
    int escolha;
    float num1, num2;

    cout << "Menu de Opções:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "Escolha uma opção (1/2/3/4): ";
    cin >> escolha;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (escolha) {
        case 1:
            cout << "Resultado da Soma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado da Subtração: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado da Multiplicação: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado da Divisão: " << num1 / num2 << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}

