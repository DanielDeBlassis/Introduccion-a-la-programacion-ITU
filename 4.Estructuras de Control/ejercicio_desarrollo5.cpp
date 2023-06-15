#include <iostream>
#include <sstream>

/** ESTRUCTURAS DE CONTROL - EJERCICIO DESARROLLO #5
 *
 * Realizar un programa donde se ingresa un número por teclado y realizar las
 * siguientes acciones. Implemente un menú simple para que el usuario elija la
 * opción a ejecutar:
 *
 *       -Calcular la suma de los números comprendidos entre el número 1 y el número ingresado.
 *       -Calcular el promedio entre el número 1 y el número ingresado.
 *       -Indicar la cantidad de números pares comprendidos entre 1 y el número ingresado.
 *       -Indicar la cantidad de números cuyo divisor es 3, comprendidos entre 1 y el número ingresado.
 *
 **/

// COLORES
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define WHITE "\033[97m"
#define LIGHT_YELLOW "\033[93m"
#define LIGHT_CYAN "\033[96m"
#define LIGHT_GREEN "\033[92m"
#define LIGHT_MAGENTA "\033[95m"

// Prototipos de función
void imprimirMenu();
double calcularSuma(double);
double calcularPromedio(double);
int calcularPares(double);
int calcularDivisores(double);

//--
using namespace std;

int main()
{

    bool salir = false;
    double nroIngresado = 0;

    while (nroIngresado == 0)
    {
        string input;
        
        cout << LIGHT_YELLOW << "Ingrese un número: " << RESET << endl;
        getline(cin, input);
        istringstream iss(input);

        if (iss >> nroIngresado && nroIngresado != 0)
        {
            while (!salir)
            {
                int opcionElegida;
                imprimirMenu();

                cout << LIGHT_CYAN << "El número ingresado es: " << LIGHT_GREEN << nroIngresado << RESET << endl;
                cout << LIGHT_YELLOW << "👉 Ahora ingrese el número de la opción que quiera elegir: " << RESET << endl;
                cin >> opcionElegida;

                double resultado;

                switch (opcionElegida)
                {
                case 1:
                    resultado = calcularSuma(nroIngresado);
                    cout << LIGHT_CYAN << "La suma de los números comprendidos entre 1 y " << LIGHT_GREEN << nroIngresado << LIGHT_CYAN << " es " << LIGHT_YELLOW << resultado << RESET << endl;
                    break;
                case 2:
                    resultado = calcularPromedio(nroIngresado);
                    cout << LIGHT_CYAN << "El promedio entre 1 y " << LIGHT_GREEN << nroIngresado << LIGHT_CYAN << " es " << LIGHT_YELLOW << resultado << RESET << endl;
                    break;
                case 3:
                    resultado = calcularPares(nroIngresado);
                    cout << LIGHT_CYAN << "La cantidad de números pares comprendidos entre 1 y " << LIGHT_GREEN << nroIngresado << LIGHT_CYAN << " es " << LIGHT_YELLOW << resultado << RESET << endl;
                    break;
                case 4:
                    resultado = calcularDivisores(nroIngresado);
                    cout << LIGHT_CYAN << "La cantidad de números cuyo divisor es 3, comprendidos entre 1 y " << LIGHT_GREEN << nroIngresado << LIGHT_CYAN << " es " << LIGHT_YELLOW << resultado << RESET << endl;
                    break;
                case 5:
                    salir = true;
                    break;
                default:
                    cout << RED << "ERROR: No seleccionó una opción válida!" << RESET << endl;
                    break;
                }
            }
        }
        else
        {
            cout << RED << "ERROR: Ingrese un número válido y distinto de 0!" << RESET << endl;
        }
    }

    return 0;
}

/**
 * MENÚ
 * Imprime el menú con el número de opciones para elegir.
 */
void imprimirMenu()
{

    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   MENÚ " << endl;
    cout << "================================================================================================" << endl;
    cout << "(1) Calcular la suma de los números comprendidos entre el número 1 y el número ingresado." << endl;
    cout << "(2) Calcular el promedio entre el número 1 y el número ingresado." << endl;
    cout << "(3) Indicar la cantidad de números pares comprendidos entre 1 y el número ingresado." << endl;
    cout << "(4) Indicar la cantidad de números cuyo divisor es 3, comprendidos entre 1 y el número ingresado." << endl;
    cout << "(5) Salir." << endl;
    cout << "================================================================================================" << RESET << endl;
}

/**
 * OPCIÓN #1 - CALCULAR SUMA
 * Calcular la suma de los números comprendidos entre el número 1 y el número ingresado.
 * @param numero correspondiente al número ingresado.
 * @return suma total de los números comprendidos etre 1 y el número ingresado.
 */
double calcularSuma(double numero)
{

    double suma = 0;

    for (int i = 1; i <= numero; i++)
    {
        suma += i;
    }

    return suma;
}

/**
 * OPCIÓN #2 - CALCULAR PROMEDIO
 * Calcular el promedio entre el número 1 y el número ingresado.
 * @param numero correspondiente al número ingresado.
 * @return promedio entre el número 1 y el número ingresado.
 */
double calcularPromedio(double numero)
{

    double promedio = (numero + 1) / 2;

    return promedio;
}

/**
 * OPCIÓN #3 - CALCULAR PARES
 * Indicar la cantidad de números pares comprendidos entre 1 y el número ingresado.
 * @param numero correspondiente al número ingresado.
 * @return número entero con el total de números pares comprendidos.
 */
int calcularPares(double numero)
{

    int cantNrosPares = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            cantNrosPares++;
        }
    }

    return cantNrosPares;
}

/**
 * OPCIÓN 4 - CALCULAR DIVISORES
 * Indica la cantidad de números cuyo divisor es 3, comprendidos entre 1 y el número ingresado.
 * @param numero correspondiente al número ingresado.
 * @return número entero con el total de divisores de 3.
 */
int calcularDivisores(double numero)
{

    int cantDivisores3 = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (i % 3 == 0)
        {
            cantDivisores3++;
        }
    }

    return cantDivisores3;
}