#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
	char continuar;
	int mayorpar = 0;
	int menorpar = 	INT_MAX;
	int contpares = 0;
	int sumapares = 0;
	do
	{
		int num;
		cout<<" Ingrese el Numero:  "<<endl;
		do {
			cin>> num;

			if(num % 2 ! = 0){
				cout<<" El numero no es par,Ingrese nuevamente un numero "<<endl;
			}

			if(num % 2 == 0){
				if (num > mayorpar)
					mayorpar = num;

				if(num < menorpar)
					menorpar = num;

				sumapares = sumapares + num;
				contpares = contpares + 1;
			}

		}while(num%2!=0)

		cout<<" Desea continuar(S= si/ N= no): ";
		do{
			cin>>continuar;
		}while(!((continuar=='S')or(continuar=='N')));


	}while(continuar != 'N');

	cout<<"Promedio Pares: "<<(sumapares / contpares)<<endl;
	cout<<"Mayor Par: "<<mayorpar<<endl;
	cout<<"Menor Par: "<<menorpar<<endl;
    return 0;
}


