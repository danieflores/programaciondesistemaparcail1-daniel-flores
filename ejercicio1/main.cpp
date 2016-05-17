#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int numero =0, calor=0, con5=0;
int main()
{
    while(calor<10)
    {
        cout<<"Ingrese Numero : ";
        cin>>numero;
        calor++;
        if (numero%5==0)
        {
            con5++;
        }
    }
    cout <<"Total de Numeros divisibles entre 5: "<<con5<<endl;

}


