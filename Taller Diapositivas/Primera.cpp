/*
Programa:ingresar 5 notas con un arreglo y decir el promedio
Fecha:23 agosto 2018
Creador:Juan Sebastian Bayer
*/#include <iostream>
#include <stdio.h>
using namespace std;
//Funcion principal
int main(int argc, char *argv[]) {
	
	float cali[5];
	float prom = 0;
	
	//inicializar el arreglo para ontroducir ddatos por el usuario
	for (int i = 0; i < 5; i++)
		{
			printf(" ingrese las notas %d: \n", i+1);
			scanf("%f", &cali[i]);
				prom += cali[i];
			printf("\n");
		}
	printf("las notas ingresadas son : %2f\n\n");
	for(int i = 0; i<5; i++)
	{
		printf("%.2f\n",cali[i]);
		
	}
	printf(" el promedio de notas es %.2f: ", prom/5);
	
	
	return 0;
}

