#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: un arreglo de 4 elementos numericos sumarlos y mostrarlos en pantalla
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/

int main(int argc, char *argv[]) {
	//variables
	float num[]={1,7.5,5,12.5};
	float sum=0;
	//ciclo for que suma los numeros
	for(int i=0;i<4;i++)
	{
		//aca se imprime los numeros con dos decimales
		printf ("%.2f\n",num[i]);
		sum=sum+num[i];
	}
	printf("el resultado es: %.2f",sum);
	
	return 0;
}
