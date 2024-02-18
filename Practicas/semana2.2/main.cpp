#include <iostream>

using namespace std;

double num1, num2;

// Definición de funciones

void get_info () {
    cout << "\n Ingrese el primer número: ";
    cin >> num1;

    cout << " Ingrese el segundo número: ";
    cin >> num2;
}

void sumar (double num1, double num2) {
    double result = num1 + num2;
    cout << "- El resultado de la suma de " << num1 << " y " << num2 << " es: " << result << "\n";
}

void restar (double num1, double num2) {
    double result = num1 - num2;
    cout << "- El resultado de la resta de " << num1 << " y " << num2 << " es: " << result << "\n";
}

void multiplicar (double num1, double num2) {
    double result = num1 * num2;
    cout << "\n- El resultado de la multiplicacion de " << num1 << " y " << num2 << " es: " << result << "\n";
}

void dividir (double num1, double num2) {
    if (num2 != 0) {
        double div = num1 / num2;
        cout << "- El resultado de la división de " << num1 << " y " << num2 << " es: " << div << "\n";
    }
    else {
        cout << "- No se puede dividir entre 0";
    }
}

void aumentar(double num1, double num2) {
    double perc = 50;
    double sum = num1 + num2;
    double result = (sum * perc/100) + sum;
    cout << "\n- El resultado de aumentar en un 50% la suma de " << num1 << " y " << num2 << " es: " << result << "\n";
}

void get_avg (double num1, double num2) {
    double result = (num1 + num2) / 2;
    cout << "\n- El resultado del promedio de " << num1 << " y " << num2 << " es: " << result << "\n";
}

int pause_cls() {
    std::cout << "\n Press Enter to continue..." << std::endl << "\n";
    std::cin.get();  // Wait for user to press Enter key
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer

    return 0;
}

int main() {

    int option;

    do {
        cout << "\n MENU DE OPCIONES \n";
        cout << "   1. Sumar  \n";
        cout << "   2. Restar  \n";
        cout << "   3. Multiplicar  \n";
        cout << "   4. Dividir  \n";
        cout << "   5. Aumentar 50% (la suma de dos números)  \n";
        cout << "   6. Calcular promedio  \n";
        cout << "   7. Salir  \n";
        cout << " Ingrese la opción deseada: ";
        cin >> option;

        switch (option) {
            case 1:
                get_info();
                sumar(num1, num2);
            pause_cls();
                break;
            case 2:
                get_info();
                restar(num1, num2);
            pause_cls();
                break;
            case 3:
                get_info();
                multiplicar(num1, num2);
            pause_cls();
                break;
            case 4:
                get_info();
                dividir(num1, num2);
            pause_cls();
                break;
            case 5:
                get_info();
                aumentar(num1, num2);
            pause_cls();
                break;
            case 6:
                get_info();
                multiplicar(num1, num2);
            pause_cls();
                break;
            case 7:
                cout << "\n Muchas gracias, hasta pronto!\n";
                exit(EXIT_SUCCESS);

            default:
                cout << "\n Ingresó una opción incorrecta. Trate nuevamente. \n";
                cin.get();
                option = 1;
        }
    system("clear");
    } while (option <= 6);
}