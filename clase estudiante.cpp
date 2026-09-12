#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    double promedio;

public:
    Estudiante(string n, string m, double p) {
        nombre = n;
        matricula = m;
        promedio = p;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }

    bool estaEnRiesgoAcademico() {
        return promedio < 70;
    }
};

int main() {
    Estudiante e1("Ary", "A12345", 65.0);
    e1.mostrarInformacion();
    cout << "¿En riesgo academico? " << (e1.estaEnRiesgoAcademico() ? "Si" : "No") << endl;
    return 0;
}
