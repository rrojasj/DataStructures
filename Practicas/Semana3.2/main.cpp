#include <iostream>

using namespace std;

int main() {

    int edades1[] = {1, 2, 9, 8, 16, 32, 9, 50, 36, 20, 1, 87};
    int limite = sizeof(edades1)/sizeof(edades1[0]);

    cout << "El tamaño del vector de edades es: " << limite;

    for (int i = 0; i < limite; i++){
        cout << "Índice: " << i << " ---- " << "Valor: " << edades1[i] << endl;
    }

    std::cout << "\nOprima 'Enter' para continuar..." << std::endl;
    std::cin.get(); // Wait for user to press Enter key

    cout << "--------- Obtener la cantidad de edades --------- \n";

    int cant = 0;
    int totalAnnios = 0;
    int numMayor = 0;

    cout << "Ingrese la cantidad de edades: ";
    cin >> cant;

    int edades2[cant];

    cout << "\nDigite las edades a almacenar: \n";
    for (int i = 0; i < cant; i++) {
        cout << "- Edad No." << i+1 << ": ";
        cin >> edades2[i];
        totalAnnios += edades2[i];

    }

    cout << "\nLas edades almacenadas son: ";
    for (int i = 0; i < cant; i++) {
        cout << "\n- Edad No." << i+1 << ": " << edades2[i];
    }

    for (int i = 0; i < cant; i++) {
        if (edades2[i] > numMayor){
            numMayor = edades2[i];
        }
    }


    double promedio = totalAnnios/cant;
    cout << "\n";
    cout << "\n - El promedio de las edades almacenadas es: " << promedio;
    cout << "\n - El total de suma de las edades almacenadas es: " << totalAnnios;
    cout << "\n - La edad mayor es: " << numMayor << "\n";
}
