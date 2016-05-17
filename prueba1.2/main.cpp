#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int num, cp=0, mayor=0,menor=INT_MAX;
float prom=0;
char resp;
    do
    {
        int num;
        cout<<"Ingresar numero: "<<;
        do {
        cin>> num;


    if (num% 2 != 0){
        cout<< "Numero no es par" <<;
        }

        if (num%2==0) {

        cp++;
        prom+=num;
        if(num>mayor)
            mayor=num;
        if (menor>num)
            menor=num;
        num++;
       }
        do
    {
        cout<<" Desea continuar? ";
        cin>>resp;
        resp=toupper(resp);
}   while ((resp!='S') and (resp!='N'));
}   while (resp!='N');
cout<<" Numero Mayor de los pares: >"<<mayor<<"\n";
cout<<" El promedio de los pares: >"<<prom/cp<<"\n";
cout<<" El menor de los pares: >"<<menor<<"\n";

}
