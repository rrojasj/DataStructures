#include <iostream>
#include <string>
#include <random>
#include <cmath>

using namespace std;

int pause_cls() {
    std::cout << "Presione enter para continuar..." << std::endl << "\n";
    std::cin.get(); // Wait for user to press Enter key
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
    return 0;
}

int getVectorSize(){

    int agesQuantity;

    cout << "Por favor indique la cantidad de edades a almacenar para este vector: ";
    cin >> agesQuantity;

    return agesQuantity;
}

void getVectorAges(int* mainArray, int arrayLength, string& msg){

    cout << msg;

    for (int i = 0; i < arrayLength; i++){
        cout << "| " << mainArray[i] << " ";
    }
    cout << "|\n";
}

int* fillVectorRand (int agesQty) {

    int* ageArray= new int[agesQty];

    // Motor generador para crear números aleatorios
    random_device rd;
    mt19937 gen(rd());

    // Definir la distribución de rango para los números aleatorios
    uniform_int_distribution<> dis(0, 120);

    for (int i = 0; i < agesQty; i++){
        int randomNumber = dis(gen);
        ageArray[i] = randomNumber;
    }
    string firstArrayMsg = "\nLa edades almacenadas para este vector son: \n";

    getVectorAges(ageArray, agesQty, firstArrayMsg);

    return ageArray;
}

int* fillVectorManually(int agesQty) {

    int* ageArray= new int[agesQty];

    cout << "\nDigite las edades a almacenar: \n";
    for (int i = 0; i < agesQty; i++) {
        cout << "- Edad No." << i+1 << ": ";
        cin >> ageArray[i];
    }

    string firstArrayMsg = "\nLa edades almacenadas son: \n";

    getVectorAges(ageArray, agesQty, firstArrayMsg);

    return ageArray;
}

void getOrderAsc(){
    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);

    for (int i=0; i < agesQuantity-1; i++){
        for(int j=0; j < agesQuantity-1; j++){
            int aux;
            if (ageArray[j] > ageArray[j+1]){
                aux = ageArray[j+1];
                ageArray[j+1]= ageArray[j];
                ageArray[j]= aux;
            }
        }
    }
    string orderAscMsg = "\nLa edades ordenadas ascendentemente son: \n";
    getVectorAges(ageArray, agesQuantity, orderAscMsg);
    delete[] ageArray;
}

void getOrderDesc(){
    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);

    for (int i=0; i < agesQuantity-1; i++){
        for(int j=0; j < agesQuantity-1; j++){
            int aux;
            if (ageArray[j] < ageArray[j+1]){
                aux = ageArray[j+1];
                ageArray[j+1]= ageArray[j];
                ageArray[j]= aux;
            }
        }
    }
    string orderAscMsg = "\nLa edades ordenadas ascendentemente son: \n";
    getVectorAges(ageArray, agesQuantity, orderAscMsg);
    delete[] ageArray;
}

void getAvgAges(){
    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);

    int totalSum = 0;

    for (int i=0; i < agesQuantity; i++){
        totalSum += ageArray[i];
    }

    double avgAges = double(totalSum)/double(agesQuantity);

    avgAges = round(avgAges*100)/100;

    cout << "\nEl promedio de las edades es: ";

    printf("%g", avgAges);

    delete[] ageArray;
}

void getIncPerc() {

    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);
    int totalSum = 0;

    for (int i = 0; i < agesQuantity; i++) {
        totalSum += ageArray[i];
    }

    double perc = 0;
    cout << "\nIngrese el porcentaje a aumentar: ";
    cin >> perc;

    double totalPerc = (totalSum*perc)/100;

    double totalIncrease = totalSum + totalPerc;

    cout << "\nEl total de las edades mas el porcentaje ingresado es: ";
    printf("%g", totalIncrease);

    delete[] ageArray;
}

void getOlderAge() {
    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);

    int olderAge = 0;

    for (int i = 0; i < (agesQuantity-1); i ++) {
        if (ageArray[i] > olderAge){
            olderAge = ageArray[i];
        }
    }

    cout << "\nLa edad mayor es: " << olderAge;

    delete[] ageArray;
}

void getLowerAge() {
    int agesQuantity = getVectorSize();
    int* ageArray = fillVectorRand(agesQuantity);

    int lowerAge = ageArray[0];

    for (int i = 1; i < agesQuantity; i ++) {
        if (ageArray[i] < lowerAge){
            lowerAge = ageArray[i];
        }
    }

    cout << "\nLa edad menor es: " << lowerAge;

    delete[] ageArray;
}

void applyArrayFusion() {

    cout << "\nA continuación se llenará el vector principal: \n";
    pause_cls();

    int agesQty1 = getVectorSize();
    int* ageArray1 = fillVectorRand(agesQty1);

    cout << "\nA continuación se llenará el vector secundario: \n";
    pause_cls();

    int agesQty2 = getVectorSize();
    int* ageArray2 = fillVectorRand(agesQty2);

    int fusionQty = agesQty1+agesQty2;
    int fusionArray[fusionQty];

    int counter = 0;

    for (int i = 0; i < agesQty1; ++i) {
        fusionArray[i] = ageArray1[i];
    }

    for (int i = 0; i < agesQty2; ++i) {
        fusionArray[agesQty1+i] = ageArray2[i];
    }

    string arrayFusionMsg = "\nLa fusión de las edades serían: \n";
    getVectorAges(fusionArray, fusionQty, arrayFusionMsg);

    delete[] ageArray1;
    delete[] ageArray2;
}

int main() {

    int option;

    do {
        cout << "-- Menú de opciones --\n";
        cout << "1. Ordenar números ascendentemente\n";
        cout << "2. Ordenar números descendentemente\n";
        cout << "3. Obtener promedio\n";
        cout << "4. Sumar y aumentar\n";
        cout << "5. Mostrar edad mayor\n";
        cout << "6. Mostrar edad menor\n";
        cout << "7. Fusión de vectores\n";
        cout << "8. Salir\n";
        cout << "\nIngrese la opción deseada: ";
        cin >> option;

        switch (option) {
            case 1:
                getOrderAsc();
                pause_cls();
                break;
            case 2:
                getOrderDesc();
                pause_cls();
                break;
            case 3:
                getAvgAges();
                pause_cls();
                break;
            case 4:
                getIncPerc();
                pause_cls();
                break;
            case 5:
                getOlderAge();
                pause_cls();
                break;
            case 6:
                getLowerAge();
                pause_cls();
                break;
            case 7:
                applyArrayFusion();
                pause_cls();
                break;
            case 8:
                cout << "\nMuchas gracias, hasta pronto!\n";
                exit(EXIT_SUCCESS);
            default:
                cout << "Opción incorrecta, trate nuevamente.";
                cin.get();
                option = 1;
        }
    } while ( option <= 7);
}