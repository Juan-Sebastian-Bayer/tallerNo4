#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: un arreglo numerico entero en el cual contenga 20 elementos ingresados
por el usuario y mostrar en pantalla cual de ellos son numeros pares
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/

int main(int argc, char *argv[]) {
	int num[20];
	int i=0;
	
	for(i=1;i<=20;i++)
	{
		printf("ingrese un numero\n");
		scanf ("%d",&num[i]);
		//decicion para saber si es par o impar
		if(num[i]%2==0)
		{
			
		}else{
			printf("es impar\n",&num[i]);
		}
	}
	return 0;
}


