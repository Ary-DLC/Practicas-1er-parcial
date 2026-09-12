#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    double promedio;

public:
    Estudiante(string n, double p) {
        nombre = n;
        promedio = p;
    }

    double getPromedio() {
        return promedio;
    }
};

class Grupo {
private:
    Estudiante* estudiantes;
    int cantidad;

public:
    Grupo(Estudiante* est, int cant) {
        estudiantes = est;
        cantidad = cant;
    }

    double calcularPromedioGeneral() {
        double suma = 0;
        for (int i = 0; i < cantidad; i++) {
            suma += estudiantes[i].getPromedio();
        }
        return suma / cantidad;
    }
};

int main() {
    Estudiante lista[3] = {
        Estudiante("Ana", 85),
        Estudiante("Luis", 70),
        Estudiante("Marta", 92)
    };

    Grupo grupo(lista, 3);
    cout << "Promedio general del grupo: " << grupo.calcularPromedioGeneral() << endl;
    return 0;
}
