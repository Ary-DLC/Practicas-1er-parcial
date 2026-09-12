#include <iostream>
using namespace std;

int main() {
    double n1, n2, resultado;
    char op;

    cout << "Numero 1: ";
    cin >> n1;
    cout << "Operador (+,-,*,/): ";
    cin >> op;
    cout << "Numero 2: ";
    cin >> n2;

    bool valido = true;

    switch (op) {
        case '+': resultado = n1 + n2; break;
        case '-': resultado = n1 - n2; break;
        case '*': resultado = n1 * n2; break;
        case '/':
            if (n2 == 0) {
                cout << "Error: no se puede dividir entre cero." << endl;
                valido = false;
            } else {
                resultado = n1 / n2;
            }
            break;
        default:
            cout << "Operador no valido." << endl;
            valido = false;
    }

    if (valido) {
        cout << "Resultado: " << resultado << endl;
    }
    return 0;
}
