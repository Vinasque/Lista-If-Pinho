#include <iostream>
using namespace std;

int main() {
    int ano;

    cout << "Qual o ano? " << flush;
    cin >> ano;

    if ((ano % 4 == 0 & ano % 100 != 0) || ano % 400 == 0) {
        cout << "O ano " << ano << ": e bissexto!" << endl;
    } else {
        cout << "O ano " << ano << ": nao e bissexto!" << endl;    }

    return 0;
}