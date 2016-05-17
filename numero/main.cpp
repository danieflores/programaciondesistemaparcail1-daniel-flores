#include <iostream>
#include <stdlib.h>
using namespace std;
int numero;
int main()
{
   cout<<"ingresar un numero";
   cin>> numero;
   if (numero>0)
   {
       cout<<"Es Positivo";
   }
   else if(numero<0)
   {
       cout<<"Es negativo";
   }
   else
   {
       cout<<"Es Cero";
   }
   cout<<"\n";
   system( "PAUSA");
}
