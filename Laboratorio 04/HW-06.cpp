#include <iostream> //Entrada y salida de datos
#include <string> //Uso de cadenas de caracteres
using namespace std;

struct hAppliance{ //Struct electrodomestico
    string name;
    float cost, salePrice;
};

void applCost(hAppliance* aD, int size, int aux); //Declaracion del prototipo de la funcion

int main(void){
    hAppliance* applianceData;
    int size = 0;
    cout << "Digite la cantidad de electrodomesticos a registrar: "; cin >> size;
    applianceData = new hAppliance[size];

    for (int i = 0; i < size; i++){
        cout << "\nIngrese el nombre del electrodomestico: "; 
        cin >> applianceData[i].name;
        getline(cin, applianceData[i].name);
        cout << "Ingrese el costo del electrodomestico: "; cin >> applianceData[i].cost;
        cout << "Ingrese el precio de venta del electrodomestico: "; cin >> applianceData[i].salePrice;
    }

    applCost(applianceData, size, 0);
    return 0;
}

void applCost(hAppliance* aD, int size, int aux){ //Funcion que imprime el costo y precio de venta
    if (aux == size)
        return;
    else{
        applCost(aD, size, aux + 1);
        cout << "Costo: " << aD[aux].cost;
        cout << "Precio de venta: " << aD[aux].salePrice;
    }

}