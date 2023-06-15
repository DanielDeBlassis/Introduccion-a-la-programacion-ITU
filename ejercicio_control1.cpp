#include <iostream>

using namespace std;

int main(){

    int numeroEntero;
    float numeroDecimal;

    cout << "Ingrese un número entero: " << endl;
    cin >> numeroEntero;

    cout << "Ingrese un número decimal: " << endl;
    cin >> numeroDecimal;

    printf("Usted ha ingresado el número %i como valor entero \n", numeroEntero);
    printf("Usted ha ingresado el número %.2f como valor decimal \n", numeroDecimal);

    return 0;
}