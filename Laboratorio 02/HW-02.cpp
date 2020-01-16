#include <iostream> // Permite entrada y salida de datos en consola
#include <string> // Permite la utilización de cadenas de caracteres
using namespace std;

struct seller
{
    string dui;
    string name;
    int yearHired;
    float salary;
};

void printInfo(seller printSel);
void calculateSalary(seller calculate);

int main(void){
    seller s1;

    cout <<"Ingrese el Documento único de Identidad (DUI) del vendedor:\t";
    cin >> s1.dui;
    cin.ignore();
    cout <<"Ingrese el nombre completo del vendedor:\t";
    getline(cin, s1.name);
    cout <<"Ingrese el año en que fue contratado el vendedor:\t";
    cin >> s1.yearHired;
    cout <<"Ingrese el salario del vendedor:\t";
    cin >> s1.salary;

    printInfo(s1);
    calculateSalary(s1);

    return 0;
}

void printInfo(seller printSel){
    cout << "\n\nDatos del vendedor:" << endl;
    cout << "Documento Único de Identidad (DUI): " << printSel.dui << endl;
    cout << "Nombre completo: " << printSel.name << endl;
    cout << "Año de contratación: " << printSel.yearHired << endl;
    cout << "Salario: " << printSel.salary << endl;
}

void calculateSalary(seller calculate){
    int months = 0;
    int totalSalary;
    months = (2020 - calculate.yearHired) * 12;
    totalSalary = months * calculate.salary;
    cout << "Total de salario devengado desde " << calculate.yearHired << ": " << totalSalary << endl;
}