#include <iostream> //Entrada y salida en consola
#include <string> //Permite la utilización de cadenas de caracteres
using namespace std;

struct employee //Declaramos el struct que contendrá la informacion del empleado
{
    string name;
    float salary;
    int age;
    int workyears;
};

void printInfo(employee printEmp); //Prototipo de la función que nos ayudará a imprimir los datos

int main(void){
    employee person; //Declaramos una variable de tipo employee llamada person y llenamos los campos del struct

    cout << "Digite el nombre del empleado:\t";
    getline(cin, person.name);
    cout << "Ingrese el salario:\t";
    cin >> person.salary;
    cout << "Ingrese la edad del empleado:\t";
    cin >> person.age;
    cout << "Ingrese la cantidad de años trabajados/años laborales:\t";
    cin >> person.workyears;
    
    printInfo(person); //Enviamos los datos de person a la función

    return 0;
}

void printInfo(employee printEmp){ //función para imprimir los datos de employee
    cout << "\n\nResumen de datos del empleado:" << endl;
    cout << "Nombre del empleado: " << printEmp.name << endl;
    cout << "Salario del empleado: "<< printEmp.salary << endl;
    cout << "Edad del empleado: " << printEmp.age << endl;
    cout << "Años Laborales: " << printEmp.workyears << endl;
    if(printEmp.workyears >= 30){ //Verificamos que tenga igual o mas de 30 años laborales (Según mi investigación) para imprimir si se puede jubilar o no
        cout << "Empleado apto para jubilación" <<endl;
    }
    else{
        cout << "Empleado todavía no puede jubilarse" <<endl;
    }
}