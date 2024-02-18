#include <iostream>
#include <string>

using namespace std;

int main() {

    string titulos[2];
    string autores[2];

    cout << "Por favor ingrese la siguiente informacion de los Libros: \n";
    for (int i = 0; i < 2; i++){
        cout << "\n ******* Libro " << i+1 << " *******\n";
        cout << "Titulo：";
        getline (cin, titulos [i]);

        cout << "Autor：";
        getline (cin, autores [i]);
    }

    for (int i = 0; i < 2; i++){
        cout << "\n ******* Libro " << i+1 << " *******\n";
        cout << "Título: " << titulos[i] << "\n";
        cout << "Autor: " << autores[i] << "\n";
    }
}
