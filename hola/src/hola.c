/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Bottaro Juan Manuel
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroA;
	int numeroB;
	int numeroC;

	printf("ingrese el primer numero");
	scanf("%d",&numeroA);
	printf("ingrese el segundo numero");
	scanf("%d",&numeroB);
	printf("ingrese el tercer numero");
	scanf("%d",&numeroC);
	if(numeroA>numeroB && numeroA>numeroC)
	{
	printf("el mayor es el primero:%d",numeroA);
	} else
	{
		if(numeroB>numeroC)
		{
			printf("el mayor es el segundo: %d",numeroB);
		}else
		{
			printf("el mayor es el tercero:%d",numeroC);
		}
	}
	return 0;
}
