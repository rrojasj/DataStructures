#include <iostream>
using namespace std;

double num1, num2;

// Definición de funciones

double multiplicar (double num1, double num2) {
    double result = num1 * num2;
    return result;
}

double sumar (double num1, double num2) {
    double result = num1 + num2;
    return result;
}

double restar (double num1, double num2) {
    double result = num1 - num2;
    return result;
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

int main() {
    double num1, num2;

    cout << "Introduzca el primer número: ";
    cin >> num1;

    cout << "Introduzca el segundo número: ";
    cin >> num2;

    double mult = multiplicar (num1, num2);
    cout << "\n- El resultado de la multiplicacion de " << num1 << " y " << num2 << " es: " << mult << "\n";

    double sum = sumar (num1, num2);
    cout << "- El resultado de la suma de " << num1 << " y " << num2 << " es: " << sum << "\n";

    double subs = restar(num1, num2);
    cout << "- El resultado de la resta de " << num1 << " y " << num2 << " es: " << subs << "\n";

    double porc = 50;
    double inc = (sum * porc/100) + sum;
    cout << "- Un aumento del 50% de la suma es: " << inc << "\n";

    double avg = sum / 2;
    cout << "- El promedio de los números es: " << avg << "\n";

    dividir(num1, num2);
}

