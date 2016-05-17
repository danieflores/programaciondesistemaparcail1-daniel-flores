#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{ srand(time(0));
int i;
int n,numero;

numero=50+rand() % (100-50);
//% mod
// rango inicial + numero generador
cout<<"valor de Numero"<<numero<<"\n";
system("PAUSE");
return 0;

}
