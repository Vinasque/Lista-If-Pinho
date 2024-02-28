#include <iostream>
using namespace std;

int main() {
    float massa, altura;

    cout << "Qual a massa? " << flush;
    cin >> massa;
    cout << "Qual a altura? " << flush;
    cin >> altura;

    float indice = massa / (altura * altura);

    if (indice < 17) {
        cout << "Muito abaixo do peso!" << endl;
    } else if (17 <= indice < 18.5) {
        cout << "Abaixo do peso!" << endl;
    } else if (18.5 <= indice < 25) {
        cout << "Peso normal." << endl;
    } else if (25 <= indice < 30) {
        cout << "Acima do peso!" << endl;
    } else if (30 <= indice < 35) {
        cout << "Obesidade!" << endl;
    } else if (30 <= indice < 40) {
        cout << "Obesidade severa!" << endl;
    } else if (40 <= indice) {
        cout << "Obesidade mórbida" << endl;
    }

    return 0;
}