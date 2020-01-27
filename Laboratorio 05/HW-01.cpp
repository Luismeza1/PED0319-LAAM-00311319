#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct producto{
    string name;
    float price;
    int stockQty;
};
typedef struct producto Producto;

int main(void){
    stack<Producto> pilaDeProductos;

    bool continuar = true;
    do{
        char opcion = 's';
        cout << "\nCantidad de productos actual: " << pilaDeProductos.size();
        cout << "\nDesea apilar otro producto? (s/n): ";
        cin >> opcion; cin.ignore();

        if(opcion == 's' || opcion == 'S'){
            Producto unProducto;
            cout << "Nombre del producto: "; getline(cin, unProducto.name);
            cout << "Precio del prodcuto: ";
            cin >> unProducto.price; cin.ignore();
            cout << "Cantidad en stock: ";
            cin >> unProducto.stockQty; cin.ignore();
            pilaDeProductos.push(unProducto);
        }
        else if(opcion == 'n' || opcion == 'N'){
            continuar = false;
        }
        else{
            cout << "Opcion no valida!" << endl;
        }

    }while(continuar);

    cout << "\nDesapilando productos..." << endl;
    while(!pilaDeProductos.empty()){
        Producto productoTop = pilaDeProductos.top();
        cout << "\nProducto: " << productoTop.name << endl;
        cout << "Precio: $" << productoTop.price << endl;
        cout << "Cantidad en stock: " << productoTop.stockQty << endl;

        pilaDeProductos.pop();
    }
    cout << "Pila de preoductos vacia" << endl;


    return 0;
}