#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: ingresar 5 numeros por teclado copiarlos a orto arreglo y multiplicarlos por dos
luego mostrarlos ordenados en otro arreglo
Fecha: 27 de Agosto
Creador: Juan Sebastian Bayer
*/


int main(int argc, char *argv[]) {
	//variables
	int i,num1[5],num2[5],num3[10];
	//ciclo for para el primer arreglo que lea los numeros ingresados por teclado
	for (i=0;i<5;i++){
		printf("Ingresa el dato\n");
		scanf("%d",&num1[i]);
		printf("\n");
	}
	//ciclo for para multiplicar los arreglos
	for(i=0;i<5;i++)
	{
		num2[i]=num1[i]*2;
	}
	for(i=0;i<5;i++)
	{
		num3[i]=num1[i];
	}
	for(i=0;i<5;i++)
	{
		num3[5+i]=num2[i];
	}
	for (i=0;i<10;i++){
		printf("%d\n",num3[i]);
	}
	return 0;
}

