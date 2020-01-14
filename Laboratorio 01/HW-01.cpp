#include <iostream>
using namespace std;

void suma(int *p){ //Iniciamos la función suma
  int sumaPrimos = 0;
  for(int i = 0; i < 25; i++){ //Declaramos el bucle for, con i de 0 a 24
     sumaPrimos += *(p+i); //Agregamos el numero primo con el contador a la posición i del arreglo 
  }

  cout << "La suma de los números primos de 1 a 100 es: "<<sumaPrimos<<endl; //Imprimimos la suma
}

int main(void){
    int n=100, c=0, c2=0, res=0, nc=0, primos=0; //Declaramos las variables y las inicializamos a 0, con excepción de n que inicializamos a 100
    int sp[25]; //Declaramos el arreglo, tamaño 25, que es el numero de primos que hay de 1 a 100
  
  for(c=1;c<=n;c++) //Declaramos el bucle for sin declarar la variable ahi para que no se destruya, vamos a utilizar su valor
  {
    for(c2=1;c2<=c;c2++) //Declaramos el segundo bucle for, haciendo lo mismo que con el primero
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      sp[primos] = c;
      primos++;
    }
    nc=0;
  }

  suma(sp);

  return 0;

}

