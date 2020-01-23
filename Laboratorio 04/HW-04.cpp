#include <iostream> //Entrada y salida de datos
using namespace std;

int invertNumber(int num, int aux); //Declaracion del prototipo de la funcion 

int main (void){ 
    int num = 0;
    cout << "Ingrese el numero: ";
    cin >> num;
    if(num < 0){ //Pequeña validacion a la hora de solicitar un numero al usuario, ya que tienen que ser naturales
        cout << "ERROR: El numero no pertenece a los naturales" << endl;
        return 0;
    }
    else{
        cout << "el numero invertido es: " << invertNumber(num, 0) << endl;
    }  


    return 0;
}

int invertNumber(int num, int aux){ //Funcion que nos ayuda a invertir un entero mediante recursion
    if(num == 0)
        return aux;
    
    else
        return invertNumber(num / 10, aux * 10 + num % 10);
}