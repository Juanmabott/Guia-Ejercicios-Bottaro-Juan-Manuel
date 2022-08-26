/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
Bottaro juan Manuel
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroA;
	int numeroB;
	int numeroC;
	int numeroMedio;
	int bandera=1;

	printf("ingrese primer numero:");
	scanf("%d",&numeroA);
	printf("ingrese primer segundo:");
	scanf("%d",&numeroB);
	printf("ingrese primer tercer:");
	scanf("%d",&numeroC);


	if((numeroA>numeroC && numeroA<numeroB) || (numeroA<numeroC && numeroA>numeroB))
	{
		numeroMedio=numeroA;
	}else
	{
		if((numeroB>numeroC && numeroB<numeroA) || (numeroB<numeroC && numeroB>numeroA))
		{
			numeroMedio=numeroB;
		}else
	{
		if((numeroC>numeroB && numeroC<numeroA) || (numeroC<numeroB && numeroC>numeroA))
		{
			numeroMedio=numeroC;
		}else
		{
			bandera=0;
		}
	}
	}
	if(bandera==1)
	{
		printf("el numero del medio es:%d",numeroMedio);
	}
	else{
		printf("no hay numero medio");
	}

	return EXIT_SUCCESS;
}
