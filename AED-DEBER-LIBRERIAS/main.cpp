#include <iostream>
#include "TupizaAED.h"
#include "TupizaAEDIngresar.h"
using namespace std;
using namespace ordenamiento;
int main() {
  cout<<"\t\t\t\tMATRIZ DESORDENANDA\n";
  cout<<"\n";
  cout<<"\n";
int  A[10]={88, -6,69,-33,98 ,7,23,-5,0,100};
imprimirArreglo(A,10);
cout<<endl;
  cout<<"\t\t\t\tMATRIZ ORDENANDA\n";
  cout<<"\n";
ordenar(A,0,9);
imprimirArreglo(A,10);
return 0;
}
