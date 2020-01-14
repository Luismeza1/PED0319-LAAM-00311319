#include <iostream>
using namespace std;

void suma(int *p){
  int sumaPrimos = 0;
  for(int i = 0; i < 25; i++){
    sumaPrimos += *(p+i);
  }

  cout << "La suma de los números primos de 1 a 100 es: "<<sumaPrimos<<endl;
}

int main(){
    int n=100, c=0, c2=0, res=0, nc=0, primos=0;
    int sp[25];
  
  for(c=1;c<=n;c++)
  {
    for(c2=1;c2<=c;c2++)
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

