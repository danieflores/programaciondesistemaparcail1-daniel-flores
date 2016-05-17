#include <iostream>
#include <stdlib.h>

using namespace std;
int num,cp=0,mayor=0,suma=0,menor=INT_MAX;
char resp;
float promedio=0;
int main ()
{
    do
    {
        {
            do
            {
                cout<< " Ingresar Un Numero ";
                cin>>num;
            }
            while (num%2!=0);
            suma+=num;
            cp++;
            if (num>mayor)
                mayor=num;
            if (num<menor)
                menor=num;
                promedio=suma/cp;
        }
        do
        {
            cout<< " Quiere Continuat? ";
            cin>>resp;
            resp=toupper(resp);
        }
        while ((resp!='S')and(resp!='N'));
    }  while (resp!='N');
    cout<< " Suma de Numero Pares "<<suma<<endl;
    cout<< " Numero de pares Encontrados "<<cp<<endl;
    cout<< " Numero Mayor Encontrado "<<mayor<<endl;
    cout<< " Numero Menor Encontrados"<<menor<<endl;
    cout<< " Promedio "<<promedio<<endl;

}
