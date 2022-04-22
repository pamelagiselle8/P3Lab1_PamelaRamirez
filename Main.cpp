#include <iostream>
using namespace std;

int main() {
    int incognita;
    cout << "---Teorema de Pitagoras--- \n"
    << "Seleccione incognita A/B/C: ";
    cin >> incognita;
    if (incognita == 1) {
        cout << "Ecuacion inicial:\n"
        << "C^2 = A^2 + B^2";
        
    }
    else if (incognita == 2) {
        cout << "---Teorema de Pitagoras--- \n";
    }
    else if (incognita == 3) {
        cout << "---Teorema de Pitagoras--- \n";
    }
    else{
        cout << "Opcion invalida \n";
    }
    return 0;
}
