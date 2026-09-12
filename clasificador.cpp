#include <iostream>
using namespace std;

int main() {
    int cal;
    cout << "Calificacion (0-100): ";
    cin >> cal;

    if (cal < 0 || cal > 100) {
        cout << "Calificacion fuera de rango." << endl;
    } else if (cal < 60) {
        cout << "NA - No Acreditado" << endl;
    } else if (cal < 70) {
        cout << "S - Suficiente" << endl;
    } else if (cal < 80) {
        cout << "B - Bueno" << endl;
    } else if (cal < 90) {
        cout << "MB - Muy Bueno" << endl;
    } else {
        cout << "E - Excelente" << endl;
    }
    return 0;
}
