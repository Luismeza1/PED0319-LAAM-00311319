#include <iostream>
using namespace std;

int invertNumber(int num, int aux);

int main (void){
    int num = 0;
    cout << "Ingrese el numero: ";
    cin >> num;
    if(num < 0){
        cout << "ERROR: El numero no pertenece a los naturales" << endl;
        return 0;
    }
    else{
        cout << "el numero invertido es: " << invertNumber(num, 0) << endl;
    }  


    return 0;
}

int invertNumber(int num, int aux){
    if(num == 0)
        return aux;
    
    else
        return invertNumber(num / 10, aux * 10 + num % 10);
}