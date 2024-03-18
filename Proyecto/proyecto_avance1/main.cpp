#include <iostream>

using namespace std;

int pause_cls() {
    std::cout << "\n Press Enter to continue..." << std::endl << "\n";
    std::cin.get(); // Wait for user to press Enter key
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
    return 0;
}

// Estructura de la pila

struct Pila {

};

int main() {
    int option;

    do {
        cout << "\n MENU DE OPCIONES \n";
        cout << "   1. Insertar datos a la pila \n";
        cout << "   2. Eliminar datos al inicio de la pila \n";
        cout << "   3. Mostrar datos de la pila \n";
        cout << "   4. Buscar un dato específico \n";
        cout << "   5. Modificar un dato específico \n";
        cout << "   6. Eliminar un dato específico \n";
        cout << "   7. Mostrar Dato Mayor de la pila  \n";
        cout << "   8. Mostrar Dato Menor de la pila \n";
        cout << "   9. Sumar y aumentar datos de la pila \n";
        cout << "   10. Promedio de la pila \n";
        cout << "   11. Salir  \n";
        cout << "\n Ingrese la opción deseada: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "TBD";
            pause_cls();
            break;
            case 2:
                cout << "TBD";
            pause_cls();
            break;
            case 3:
                cout << "TBD";
            pause_cls();
            break;
            case 4:
                cout << "TBD";
            pause_cls();
            break;
            case 5:
                cout << "TBD";
            pause_cls();
            break;
            case 6:
                cout << "TBD";
            pause_cls();
            break;
            case 7:
                cout << "\nMuchas gracias, hasta pronto!\n";
            exit(EXIT_SUCCESS);
            default:
                cout << "Valor incorrecto, por favor trate nuevamente.";
            cin.get();
            option = 1;
        }
        system("clear");
    } while (option <= 10);
}
