#include <iostream>
#include <sstream>

/**
 * MODULARIZACIÓN - EJERCICIO DESARROLLO #1
 *
 * Escriba un programa en el que se ingresa por teclado 4
 * números reales positivos, luego se los pase como parámetros
 * a una función que tiene como objetivo devolver el resultado
 * de la multiplicación de todos ellos. El resultado debe mostrarse
 * en el programa principal.
 */

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
void informarUsuario(int);
double calcularMultiplicacion(double[]);
void imprimirResultado(double);

//--
using namespace std;

int main()
{
    double listaNumeros[4];
    double nroIngresado;

    int cantidadNrosAIngresar = 4;
    int posicion = 0;

    while (cantidadNrosAIngresar != 0)
    {
        string input;

        informarUsuario(cantidadNrosAIngresar);
        cout << LIGHT_YELLOW << "================================================================================================" << endl;
        cout << "Ingrese un número real positivo: " << RESET << endl;

        getline(cin, input);
        istringstream iss(input);

        if (iss >> nroIngresado && nroIngresado > 0)
        {
            listaNumeros[posicion] = nroIngresado;
            posicion++;
            cantidadNrosAIngresar--;
        }
        else
        {
            cout << RED << "ERROR: Ingrese un número válido mayor a 0!" << RESET << endl;
        }
    }

    if (cantidadNrosAIngresar == 0)
    {
        double totalMultiplicacion = calcularMultiplicacion(listaNumeros);
        imprimirResultado(totalMultiplicacion);
    }

    return 0;
}

/**
 * IMPRIME MENSAJE INFORMATIVO PARA EL USUARIO
 * Aclara la cantidad de números a ingresar que le faltan al usuario.
 * @param numerosFaltantes correspondiente a la cantidad de números que le faltan por ingresar al usuario.
 */
void informarUsuario(int numerosFaltantes)
{
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   INFORMACIÓN " << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_MAGENTA << "-Números a ingresar " << LIGHT_CYAN << " << " << LIGHT_GREEN << numerosFaltantes << LIGHT_CYAN << " >>" << RESET << endl;
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
}

/**
 * CALCULAR RESULTADO DE LA MULTIPLICACIÓN
 * A partir de un arreglo de 4 números reales positivos,
 * previamente ingresados por el usuario,
 * la función calcula el resultado y lo devuelve.
 * @param lista correspondiente a la lista de números ingresados por el usuario.
 * @return resultado de la multiplicación.
 */
double calcularMultiplicacion(double lista[])
{

    double resultado = 1;
    int limiteArray = 4;

    for (int i = 0; i < limiteArray; i++)
    {
        resultado *= lista[i];
    }

    return resultado;
}

/**
 * IMPRIMIR RESULTADO
 * Imprime el mensaje con el resultado de la multiplicación para que sea más visible para el usuario.
 * @param resultadoTotal correspondiente al resultado de la multiplicación de los números ingresados.
 */
void imprimirResultado(double resultadoTotal)
{
    cout << LIGHT_GREEN << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   RESULTADO " << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_GREEN << "-El resultado total de los números ingresados es de: " << LIGHT_YELLOW << resultadoTotal << LIGHT_GREEN << endl;
    cout << "================================================================================================" << RESET << endl;
}