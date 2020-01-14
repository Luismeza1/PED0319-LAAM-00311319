#include <iostream>
#include <string>
using namespace std;

bool isNumber(string word){ //Funcion booleana para ver si es numero
    bool hasNumber = true; //No sé usar bandera, busqué en varios codigos y vi como funcionaba al igual que el metodo .size
    int tam;
    tam = word.size();
    for(int i = 0; i < tam; i++){
        if(word[i] <=48 || word[i] >=58 ){
            hasNumber = false;            
            break;
        }
    }
    return hasNumber;
}

int main(void){
string n;
cout << "Digite cadena de caracteres: " << endl;
cin >> n;

while(isNumber(n)){
    cout << "Valor de cadena de caracteres: 1" <<endl; //si es cadena de numeros imprime 1 y uso break para que no sea una impresion infinita
    break;
}

while(!isNumber(n)){
    cout << "Valor de cadena de caracteres: -1" <<endl; //Si es cadena de letras imprime -1 y lo mismo con el break.
    break;
}

return 0;
}

