#include <iostream>

using namespace std;

int main() {
    float HT, VH, PD, SB, TD, SL;

    // Obtendo valores para as variáveis
    cout << "Digite as horas trabalhadas no mês: ";
    cin >> HT;
    cout << "Digite o valor por hora trabalhada: ";
    cin >> VH;
    cout << "Digite o percentual de desconto: ";
    cin >> PD;

    // Calculando o salário bruto
    SB = HT * VH;

    // Calculando o total de desconto
    TD = (PD / 100) * SB;

    // Calculando o salário líquido
    SL = SB - TD;

    // Apresentando os valores
    cout << "Horas trabalhadas: " << HT << endl;
    cout << "Salário Bruto: " << SB << endl;
    cout << "Desconto: " << TD << endl;
    cout << "Salário Líquido: " << SL << endl;

    return 0;
}
