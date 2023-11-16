#include <iostream>

using namespace std;

int main() {
    int Int1, Int2;
    cout << "Digite o primeiro número inteiro (Int1): ";
    cin >> Int1;
    cout << "Digite o segundo número inteiro (Int2): ";
    cin >> Int2;

    // Verificação para evitar a divisão por zero
    if (Int2 == 0) {
        cout << "Erro! Divisão por zero não é permitida." << endl;
        return 0;
    }

    int quociente = Int1 / Int2;
    int resto = Int1 % Int2;

    cout << "O quociente da divisão de " << Int1 << " por " << Int2 << " é: " << quociente << endl;
    cout << "O resto da divisão de " << Int1 << " por " << Int2 << " é: " << resto << endl;

    return 0;
}
