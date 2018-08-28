#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo que genere 100 numeros pares y genere su suma
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/
int main(int argc, char *argv[]) {
	//variables
	int a,sum,i,num[100];
	i=0;
	sum=0;
	//ciclo for los numeros esten comprendidos entre 1 y 100
	for (a=1;a<=100;a++)
	{
		//desicion para saber cuales son los numeros pares
		if (a%2==0)
		{
			num[i]=a;
			i++;
		}
	}
	//ciclo for donde suma los 100 numeros
	for (a=0;a<i;a++)
	{
		sum=sum+num[a];
	}
	
	printf("%d\n",sum);
	
	return 0;
}

