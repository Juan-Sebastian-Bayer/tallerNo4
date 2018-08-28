#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo que tenga 10 elementos y diga cual es el mayor
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/

int main(int argc, char *argv[]) {
	//varibles
	int num [10]={0,10,5,8,7,6};
	int i=0,j=0;
	
	for (j=0;j<10;j++)
	{
		//decicion para saber cual elemnto es mayor
		if (num[j]>num[i])
		{
			i=j;
		}
	}
	printf("\n el elemento mayor es %d",num[i]);
	return 0;
}

