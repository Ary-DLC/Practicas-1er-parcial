#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string frase;
    cout << "Escribe una frase: ";
    getline(cin, frase);

    
    stringstream ss(frase);
    string palabra;
    int numPalabras = 0;
    while (ss >> palabra) numPalabras++;

    
    int vocales = 0;
    for (char c : frase) {
        char lc = tolower(c);
        if (lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') vocales++;
    }

    
    string invertida = frase;
    reverse(invertida.begin(), invertida.end());

    cout << "Numero de palabras: " << numPalabras << endl;
    cout << "Numero de vocales: " << vocales << endl;
    cout << "Frase invertida: " << invertida << endl;
    return 0;
}
