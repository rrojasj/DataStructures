#include <iostream>

using namespace std;

double num1;
double num2;
double num3;
double pos1;
double pos2;
double pos3;

void obtenerInfo() {
    cout << "- Ingrese el primer número: ";
    cin >> num1;

    cout << "- Ingrese el segundo número: ";
    cin >> num2;

    cout << "- Ingrese el tercer número: ";
    cin >> num3;
}

void ordenarAsc(double num1, double num2, double num3) {
    if (num1 != num2) {
        if (num1 < num2) {
            if (num1 < num3) {
                if (num2 != num3) {
                    if (num2 < num3) {
                        pos1 = num1;
                        pos2 = num2;
                        pos3 = num3;
                    } else {
                        pos1 = num1;
                        pos2 = num3;
                        pos3 = num2;
                    }
                } else {
                    pos1 = num1;
                    pos2 = num2;
                    pos3 = num3;
                }
            } else {
                pos1 = num3;
                pos2 = num1;
                pos3 = num2;
            }
        } else {
            if (num2 < num3) {
                if (num1 < num3) {
                    pos1 = num2;
                    pos2 = num1;
                    pos3 = num3;
                } else {
                    pos1 = num2;
                    pos2 = num3;
                    pos3 = num1;
                }
            } else {
                pos1 = num3;
                pos2 = num2;
                pos3 = num1;
            }
        }
    } else {
        if (num1 < num3) {
            pos1 = num1;
            pos2 = num2;
            pos3 = num3;
        } else {
            pos1 = num3;
            pos2 = num1;
            pos3 = num2;
        }
    }
    cout << "\n- El orden ascendente es: " << pos1 << " - " << pos2 << " - " << pos3 << "\n";
}

void ordenarDes(double num1, double num2, double num3) {
    if (num1 != num2) {
        if (num1 > num2) {
            if (num1 > num3) {
                pos1 = num1;
                if (num2 != num3) {
                    if (num2 > num3) {
                        pos2 = num2;
                        pos3 = num3;
                    } else {
                        pos1 = num1;
                        pos2 = num3;
                        pos3 = num2;
                    }
                } else {
                    pos1 = num1;
                    pos2 = num2;
                    pos3 = num3;
                }
            } else {
                pos1 = num3;
                pos2 = num1;
                pos3 = num2;
            }
        } else {
            if (num2 > num3) {
                if (num1 > num3) {
                    pos1 = num2;
                    pos2 = num1;
                    pos3 = num3;
                } else {
                    pos1 = num2;
                    pos2 = num3;
                    pos3 = num1;
                }
            } else {
                pos1 = num3;
                pos2 = num2;
                pos3 = num1;
            }
        }
    } else {
        if (num1 > num3) {
            pos1 = num1;
            pos2 = num2;
            pos3 = num3;
        } else {
            pos1 = num3;
            pos2 = num1;
            pos3 = num2;
        }
    }

    cout << "\n- El orden descendente es: " << pos1 << " - " << pos2 << " - " << pos3 << "\n";
}

void obtenerProm(double num1, double num2, double num3) {
    int cantNums = 3;
    double result = (num1 + num2 + num3) / cantNums;

    cout << "\n- El promedio de los números " << num1 << ", " << num2 << " y " << num3 << " es: " << result << "\n";
}

void aumentarPorc(double num1, double num2, double num3) {
    double porc = 75;
    double sumaTotal = (num1 + num2 + num3);
    double result = ((sumaTotal * porc) / 100) + sumaTotal;

    cout << "\n- El resultado de aumentar en un 75% la suma de " << num1 << ", " << num2 << " y " << num3 << " es: " <<
            result << "\n";
}

void mostrarMayor(double num1, double num2, double num3) {
    double numMayor;

    if (num1 != num2) {
        if (num1 > num2) {
            if (num1 > num3) {
                numMayor = num1;
            } else {
                numMayor = num3;
            }
        } else {
            if (num2 > num3) {
                numMayor = num2;
            } else {
                numMayor = num3;
            }
        }
    } else {
        if (num1 != num3) {
            if (num1 > num3) {
                numMayor = num1;
            } else {
                numMayor = num3;
            }
        } else {
            cout << "\n Los 3 números son iguales, no existe un número mayor.\n";
        }
    }
    cout << "\n- El número mayor de los tres valores es: " << numMayor << "\n";
}

void mostrarMenor(double num1, double num2, double num3) {
    double numMenor;

    if (num1 != num2) {
        if (num1 < num2) {
            if (num1 < num3) {
                numMenor = num1;
            } else {
                numMenor = num3;
            }
        } else {
            if (num2 < num3) {
                numMenor = num2;
            } else {
                numMenor = num3;
            }
        }
    } else {
        if (num1 != num3) {
            if (num1 < num3) {
                numMenor = num1;
            } else {
                numMenor = num3;
            }
        } else {
            cout << "\n Los 3 números son iguales, no existe un número menor.\n";
        }
    }
    cout << "\n-El número menor de los tres valores es: " << numMenor << "\n";
}


int pause_cls() {
    std::cout << "\n Press Enter to continue..." << std::endl << "\n";
    std::cin.get(); // Wait for user to press Enter key
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

    return 0;
}

int main() {
    int option;

    do {
        cout << "\n MENU DE OPCIONES \n";
        cout << "   1. Ordenar ascendente \n";
        cout << "   2. Ordenar descendente \n";
        cout << "   3. Obtener promedio \n";
        cout << "   4. Aumentar porcentaje \n";
        cout << "   5. Mostrar mayor \n";
        cout << "   6. Mostrar menor \n";
        cout << "   0. Salir  \n";
        cout << "\n Ingrese la opción deseada: ";
        cin >> option;

        switch (option) {
            case 1:
                obtenerInfo();
                ordenarAsc(num1, num2, num3);
                pause_cls();
                break;
            case 2:
                obtenerInfo();
                ordenarDes(num1, num2, num3);
                pause_cls();
                break;
            case 3:
                obtenerInfo();
                obtenerProm(num1, num2, num3);
                pause_cls();
                break;
            case 4:
                obtenerInfo();
                aumentarPorc(num1, num2, num3);
                pause_cls();
                break;
            case 5:
                obtenerInfo();
                mostrarMayor(num1, num2, num3);
                pause_cls();
                break;
            case 6:
                obtenerInfo();
                mostrarMenor(num1, num2, num3);
                pause_cls();
                break;
            default:
                cout << "Valor incorrecto, por favor trate nuevamente.";
                cin.get();
                option = 1;
        }
        system("clear");
    } while (option <= 6);
}
