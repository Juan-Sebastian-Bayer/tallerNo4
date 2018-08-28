#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: un arreglo numerico entero en el cual contenga 10 elementos ingresados
por el usuario y mostrar en pantalla cual de ellos son numeros pares
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/

int main(int argc, char *argv[]) {
	//variables
	int num[10];
	int i=0;
	for(i=1;i<=10;i++)
	{
		printf("ingrese un numero\n");
		scanf ("%d\n",&num[i]);
		//decicion para designar si es Par o impar
		if(num[i]%2==0)
		{
			
			printf("es par\n",&num[i]);
		}
		else
		   {
			printf("es impar\n",&num[i]);
		}
	}
	return 0;
}
