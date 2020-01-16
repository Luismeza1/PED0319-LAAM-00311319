#include <iostream>
#include <string>
using namespace std;

struct address{
    int houseNumber;
    string city;
    string state;
};

struct personalInfo{
    address personalAddress;
    string name;
    int age;
};

int main(void){
    personalInfo p1;

    cout << "Nombre: "; cin >> p1.name;
    cout << "Edad: "; cin >> p1.age;
}