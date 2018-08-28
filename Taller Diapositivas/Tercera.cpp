#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo que organize los 100 primeros numeros en forma descendente
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/
int main(int argc, char *argv[]) {
	//variables
	int i,num[100];
	//ciclo for para los primeros 100 numeros
	for(i=1;i<=100;i++)
	{
		num[i]=i;
	}
	//ciclo for para mostrarlos en orden decendente
	for(i=100;i>=1;i--)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}


