/*
 ============================================================================
 Name        : funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pedirnumero(int a);
int restar1(int a,int b);
int restar2(void);

int main(void)
{

	setbuf(stdout,NULL);
	int resultado;
	resultado=restar2();
	printf("%d",resultado);




return 0;
}
int pedirnumero(int a)
{
	printf("seleccione un numero\n");
	scanf("%d",&a);
	return a;
}

int restar1(int a,int b)
{
	int resultado;
	resultado=a-b;
	return resultado;
}

int restar2(void)
{
	int a=0;
	int b=0;
	int resultado;
	a=pedirnumero(a);

	b=pedirnumero(b);
	resultado=a-b;
	return resultado;
}
