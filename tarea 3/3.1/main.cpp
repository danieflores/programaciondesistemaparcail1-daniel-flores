#include <iostream>

using namespace std;

int main()
{int numero, c=0, mayor=0;

    do{
     do{
       cout << "Ingrese un numero mayor a 50: ";
        cin>> numero;
        if (numero>mayor and numero>100)
        mayor=numero;
       }while(( numero<50 and numero%2!=0));
       c++;
    }while (c<10);

    cout<<"El numero mayor es el: "<<mayor;


}
