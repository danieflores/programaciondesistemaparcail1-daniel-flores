#include <iostream>

using namespace std;
/*INGRESAE UN NUMERO DE HASTA 4 CIFRAS
PERO PUEDE INGRESAR UNO MAYOR.
EL PROGRAMA DEBERA ESCRIBIR tiene mas de cuatro cifras*/
int num;
int main()

{
cout<< " Ingrese el numero ";
cin>>num;
if (num<0)
    num*= (-1);
if (num<=9)
    cout<< " Tiene una cifra ";
else if (num<=99)
    cout<< " Tiene Dos Cifras ";
    else if (num<=999)
    cout<< " Tiene Tres Cifras ";
    else
        cout<< " TIENE CUATRO O MAS CIFRAS ";


}
