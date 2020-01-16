#include <iostream> //Permite entrada y salida de datos en consola
#include <math.h> //Permite el uso de funciones matemáticas como sqrt y pow
using namespace std;

struct quad //Declaramos el struct quad y los campos del registro que son los terminos de la cuadrática
{
int a;
int b;
int c;
};

void printQuad(quad printQd); //Declaramos los prototipos de las funciones a utilizar
void calculateQuad(quad calculate);

int main(void){
    quad q1; //Declaramos el struct q1 en el main e ingresamos los datos en el struct
    cout << "Ingrese el término 'A' de la cuadrática:\t";
    cin >> q1.a;
    cout << "Ingrese el término 'B' de la cuadrática:\t";
    cin >> q1.b;
    cout << "Ingrese el término 'C' de la cuadrática:\t";
    cin >> q1.c;

    printQuad(q1); //Enviamos el struct ya con los datos a las funciones que lo utilizarán
    calculateQuad(q1);

    return 0;
}

void printQuad(quad printQd){ //Declaramos una función sencilla que se encarga de imprimir la cuadrática 
    cout << "Según los términos ingresados la cuadrática es: " << printQd.a << "(x^2)+" << printQd.b << "x+" << printQd.c << endl;
}

void calculateQuad(quad calculate){ //Declaramos una función que calculará el discriminante y las raices
    float opt1 = 0, opt2 = 0, checker = 0;
    int a = calculate.a; //Cambio de variable para que no resulten demasiado largas
    int b = calculate.b;
    int c = calculate.c;
    
    checker = (b * b - 4 * a * c); //Discriminante
    opt1 = (-b + sqrt( b * b - 4 * a * c)) / (2 * a);//Raíz uno
    opt2 = (-b - sqrt( b * b - 4 * a * c)) / (2 * a);//Raíz dos

    if(checker == 0){ //Si el discriminante es cero tiene una solucion, imprime ambas porque no sé en cuál de las dos estará la solución correcta
        cout << "Una solución real" <<endl;
        cout << "Solución 1: " << opt1 << endl;
        cout << "Solución 2: " << opt2 << endl;
    }

    else if(checker > 0){ //Si es positivo el disc. imprime ambas, funcionando correctamente
        cout << "Dos soluciones reales" <<endl;
        cout << "Solución 1: " << opt1 << endl;
        cout << "Solución 2: " << opt2 << endl;
    }

    else{ //Si el discriminante es negativo no tiene solucion y directamente no las imprime, solo se le notifica al usuario
        cout << "No posee solución en los reales" << endl;
    }

}