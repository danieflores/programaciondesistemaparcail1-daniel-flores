#include <iostream>

using namespace std;

int main()
{int dia;
cout<< "Ingresar el dia 1-7 ";
cin>>dia;
switch (dia)
{
case 1:
   cout<< " DOMINGO ";
    break;
case 2:
    cout<< " LUNES ";
   break;
   case 3:
   cout<< " MARTES ";
    break;
case 4:
    cout<< "MIERCOLES ";
   break;
   case 5:
    cout<< " JUEVES ";
   break;
   case 6:
   cout<< " VIERNES ";
    break;
case 7:
    cout<< " SABADO ";
   break;
default:
    cout<< "DIA INCORRECTO";
    break;
}

}
