#include <iostream>
#include <sstream>
#include <cmath>

/**
 * MODULARIZACIÓN - EJERCICIO DESARROLLO #3
 *
 * Realice un programa con 2 funciones. La tarea de una de ellas es la de calcular el
 * área de un cuadrado dándole como parámetro el valor de un LADO, la tarea de la otra
 * función es la de calcular el área de una circunferencia dándole como parámetro el valor
 * de su RADIO. Muestre los resultados en el programa principal. Los cálculos se deben realizar
 * mientras no se ingrese como LADO o RADIO un valor 0(cero).
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

// PI
# define M_PI 3.14159265358979323846

//--
using namespace std;

// Prototipos de función
void informarUsuario();
double calcularAreaCuadrado(double);
double calcularAreaCirculo(double);
void imprimirResultado(string, string, double);
void imprimirError(string);

int main()
{
    double ladoCuadrado = 0.0;
    double radioCirculo = 0.0;
    
    informarUsuario();

    while(ladoCuadrado == 0){

        double nroIngresado = 0.0;

        string input;
        cout << LIGHT_YELLOW << "================================================================================================" << endl;
        cout << "Ingrese el valor de un lado del cuadrado: " << RESET << endl;
        getline(cin, input);
        istringstream iss(input);

        if (iss >> nroIngresado && nroIngresado > 0)
        {
            ladoCuadrado = nroIngresado;
        }
        else
        {
            string mensajeError = "- Ingrese un número válido mayor a 0!";
            imprimirError(mensajeError);
        }
    }

    while(radioCirculo == 0){

        double nroIngresado = 0.0;

        string input;
        cout << LIGHT_YELLOW << "================================================================================================" << endl;
        cout << "Ingrese el valor del radio del círculo: " << RESET << endl;
        getline(cin, input);
        istringstream iss(input);

        if (iss >> nroIngresado && nroIngresado > 0)
        {
            radioCirculo = nroIngresado;
        }
        else
        {
            string mensajeError = "- Ingrese un número válido mayor a 0!";
            imprimirError(mensajeError);
        }
    }

    if (ladoCuadrado != 0 && radioCirculo != 0)
    {
        double totalAreaCuadrado = calcularAreaCuadrado(ladoCuadrado);
        double totalAreaCirculo = calcularAreaCirculo(radioCirculo);

        string titulo = "ÁREA DEL CUADRADO";
        string mensaje = "- El área del cuadrado es de ";
        imprimirResultado(titulo, mensaje, totalAreaCuadrado);

        titulo = "ÁREA DEL CÍRCULO";
        mensaje = "- El área del círculo es de ";
        imprimirResultado(titulo, mensaje, totalAreaCirculo);
    }

    return 0;
}

/**
 * IMPRIME MENSAJE INFORMATIVO PARA EL USUARIO
 * Aclara al usuario la función del programa y el intérvalo de números que puede ingresar.
 */
void informarUsuario()
{
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   INFORMACIÓN " << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_MAGENTA << "-Este programa calcula el área de un cuadrado dándole como parametro el valor de un LADO,\n y también calcula el área de una circunferencia dándole como parametro el valor de su RADIO." << RESET << endl;
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
}

/**
 * CALCULAR ÁREA CUADRADO
 * Calcula el área de un cuadrado a partir del valor de un lado ingresado por el usuario.
 * @param valorLadoCuadrado correspondiente al valor de un lado del cuadrado.
 * @return devuelve el resultado del cálculo del área del cuadrado.
*/
double calcularAreaCuadrado(double valorLadoCuadrado)
{
    double resultado = pow(valorLadoCuadrado, 2);

    return resultado;
}

/**
 * CALCULAR ÁREA CÍRCULO
 * Calcula el área de un círculo a partir del valor del radio ingresado por el usuario.
 * @param valorRadioCirculo correspondiente al valor del radio ingresado.
 * @return devuelve el resultado del cálculo del área del círculo.
*/
double calcularAreaCirculo(double valorRadioCirculo)
{
    const double PI = M_PI;
    double resultado = PI * pow(valorRadioCirculo, 2);

    return resultado;
}

/**
 * IMPRIMIR RESULTADO
 * Imprime el resultado de una manera personalizada para que sea más visible para el usuario.
 * @param titulo correspondiente al título del resultado obtenido, en este caso si se trata del área del cuadrado o del círculo.
 * @param mensaje correspondiente al cuerpo del mensaje que se quiere mostrar.
 * @param resultadoCalculoArea correspondiente al valor del área.
*/
void imprimirResultado(string titulo, string mensaje, double resultadoCalculoArea)
{
    cout << LIGHT_GREEN << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   " << titulo << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_GREEN << mensaje << LIGHT_YELLOW << resultadoCalculoArea << LIGHT_GREEN << endl;
    cout << "================================================================================================" << RESET << endl;
}

/**
 * IMPRIMIR MENSAJE DE ERROR
 * Imprime un mensaje de error de una forma más visible para el usuario.
 * @param mensaje correspondiente al mensaje a imprimir para el usuario.
 */
void imprimirError(string mensaje)
{
    cout << RED << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   ERROR " << endl;
    cout << "================================================================================================" << endl;
    cout << mensaje << endl;
    cout << "================================================================================================" << RESET << endl;
}