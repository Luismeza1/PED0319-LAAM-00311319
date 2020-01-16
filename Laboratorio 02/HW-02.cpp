#include <iostream> // Permite entrada y salida de datos en consola
#include <string> // Permite la utilización de cadenas de caracteres
using namespace std;

struct seller // Declaramos el struct vendedor y los campos del registro
{
    string dui;
    string name;
    int yearHired;
    float salary;
};

void printInfo(seller printSel); // Prototipo de la funcion que nos ayuadrá a imprimir los datos
void calculateSalary(seller calculate); //Prototipo de la función donde calcularemos el salario total e imprimiremos

int main(void){
    seller s1; // Declaramos una variable de tipo seller (struct) llamada s1 (seller 1)

    cout <<"Ingrese el Documento único de Identidad (DUI) del vendedor:\t"; // Mostramos en pantalla y llenamos los campos del registro
    cin >> s1.dui;
    cin.ignore();
    cout <<"Ingrese el nombre completo del vendedor:\t";
    getline(cin, s1.name);
    cout <<"Ingrese el año en que fue contratado el vendedor:\t";
    cin >> s1.yearHired;
    cout <<"Ingrese el salario del vendedor:\t";
    cin >> s1.salary;

    printInfo(s1); //Enviamos el registro con sus campos llenos a nuestras funciones
    calculateSalary(s1);

    return 0;
}

void printInfo(seller printSel){ //Función que imprime en pantalla los datos del vendedor
    cout << "\n\nDatos del vendedor:" << endl;
    cout << "Documento Único de Identidad (DUI): " << printSel.dui << endl;
    cout << "Nombre completo: " << printSel.name << endl;
    cout << "Año de contratación: " << printSel.yearHired << endl;
    cout << "Salario: " << printSel.salary << endl;
}

void calculateSalary(seller calculate){ //Función que calcula el salario total devengado y lo imprime
    int months = 0;
    int totalSalary = 0;
    months = (2020 - calculate.yearHired) * 12;
    totalSalary = months * calculate.salary;
    cout << "Total de salario devengado desde " << calculate.yearHired << ": " << totalSalary << endl; //OBSERVACION: declaré la variable de tipo float pero se imprime sin decimales, como si fuera INT ¿a qué se debe?
}