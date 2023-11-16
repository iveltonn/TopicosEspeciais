#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius + 160) / 5;

    cout << "A temperatura em graus Fahrenheit é: " << fahrenheit << " F" << endl;

    return 0;
}
