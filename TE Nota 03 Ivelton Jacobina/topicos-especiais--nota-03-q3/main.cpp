#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, sobrenome;
    cout << "Digite o nome: ";
    cin >> nome;

    cout << "Digite o sobrenome: ";
    cin >> sobrenome;

    string nomeCompleto = nome + " " + sobrenome;
    cout << "O nome completo é: " << nomeCompleto << endl;

    return 0;
}
