#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};

struct personalInfo{
    string name;
    int age;
    Address pAdress;
};

void printInfo (personalInfo* pI, int size, int pos);

int main(void){
    personalInfo* pData;
    int size = 0;

    cout << "Cantidad de datos a ingresar: "; cin >> size;
    cout << size;
    pData = new personalInfo[size];

    for(int i = 0; i < size; i++){
        cout << "Nombre: "; cin >> pData[i].name;
        cout << "Edad: "; cin >> (pData + i)->age;
        cout << "No. Casa: ";cin >> pData[i].pAdress.houseNumber;
        cout << "Ciudad: "; cin >> (pData + i)->pAdress.city;
        cout << "Estado: "; cin >> (pData + i)->pAdress.state;
    }

    printInfo(pData, size, 0);

    return 0;
}

void printInfo (personalInfo* pI, int size, int pos){
    if (pos == size){
        return;
    }
    else{

        printInfo(pI, size, pos + 1);
        cout << "Nombre: "; cin >> pI[pos].name;
        cout << "Edad: "; cin >> pI[pos].age;
        cout << "No. Casa: ";cin >> pI[pos].pAdress.houseNumber;
        cout << "Ciudad: "; cin >> pI[pos].pAdress.city;
        cout << "Estado: "; cin >> pI[pos].pAdress.state;

    }
}