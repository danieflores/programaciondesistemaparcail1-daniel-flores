#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int numero,con50,suma50,prom50;
int contador,suma,mayor,menor;
int main()
{ srand(time(0));
contador=0;
suma=0;
mayor=0;
menor=100;
while (contador<10)
{ numero =1 + rand()%(100-1);
suma= suma+ numero;
if (mayor<numero)

    mayor= numero;

 if (numero<menor)

    menor=numero;
    if (numero>50)
    {con50++;
    suma50+=numero;
    }
    contador++;
    cout<<contador<< " Numero "<<numero<< "\n";
}
prom50=suma50/con50;
cout<< " Promedio Mayores a 50: "<<prom50<< "\n";
cout<< " Numeros Mayores a 50: "<<con50<< "\n";
cout<< " Numero Menor "<<menor<< "\n";
cout<< " Numero Mayor "<<mayor<< "\n";
cout<< " Suma Total: "<<suma<< "\n";
cout<< " Final del programa "<< "\n";

}
