#include <iostream> //Entrada y salida de datos
#include <cstdlib> //Librería necesaria para usar rand
#include <time.h> //Librería necesaria para usar rand
using namespace std;

int mostrarArreglo(int a[15], int tam); //Prototipo de la funcion para mostrar arreglo
void mostrarMult(int a[15]); //Prototipo de la funcion para mostrar multiplos de 7 en el arreglo
void mostrarSuma(int a[15]); //Prototipo de la funcion para sumar los multiplos de 7

int tam = 15; //Variables globales
int a[15];

int main(void){
    mostrarArreglo(a, tam);
    cout<<endl;

    mostrarMult(a);
    cout<<endl;

    mostrarSuma(a);
    cout<<endl;

    return 0;
}

int mostrarArreglo(int a[15], int tam){ //Inicializamos la funcion y llenamos el arreglo con numeros aleatrios proporcionados con rand()
    cout << "Los números del arreglo son: " <<endl;
    for(int i = 0; i < tam; i++){
        a[i] = 1 + rand() % 75;
        cout << a[i] << " ";
    }
}

void mostrarMult(int a[15]){ //Inicializamos la funcion con contador para almacenar los multiplos de 7
    cout << "Los elementos múltiplos de 7 son: "<<endl;
    for(int i = 0; i < 15; i++){
        if (a[i] % 7 == 0){
            cout << a[i] << " ";
        }
    }
}

void mostrarSuma(int a[15]){ //Inicializamos la funcion y sumamos los multiplos de 7
    int suma = 0;
    for (int i = 0; i < 15; i++){
        if (a[i] % 7 == 0){
            suma += a[i];
        }
    }
    cout << "La suma de los múltiplos de 7 es: "<< suma <<endl;
}

