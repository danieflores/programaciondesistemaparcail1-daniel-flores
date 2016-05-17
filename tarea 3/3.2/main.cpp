#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{  srand(time(0));
   char resp;
   int num, mayor=0;
   do
  {
   num= rand () % (500);
   cout<<" Numero: "<<num<<"\n";
   if (num>mayor)
    mayor=num;
   do
      {
          cout<<" Quiere continuar?? ";
          cin>>resp;
          resp=toupper(resp);
      } while ((resp!='S') and (resp!='N'));

    }while ((resp!='N'));
    cout<<" El numero mayor es: "<<mayor<<"\n";
}
