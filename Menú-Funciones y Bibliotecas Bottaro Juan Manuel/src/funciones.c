#include <stdio.h>
#include <stdlib.h>
int menu()
{
	int retorno;
	printf("1-iniciar\n");
	printf("2-procesar\n");
	printf("3-finalizar\n");
	printf("4- salir\n");
	scanf("%d",&retorno);
	return retorno;
};
void inicializar()
{
	printf("iniciando...\n");
}
void procesar()
{
	printf("procesando\n");
}
char salir()
{
	char retorno;
	printf("esta seguro que quiere salir? presione S para salir\n");
	fflush(stdin);
	scanf("%c",&retorno);
	return retorno;
}

void finalizar()
{
	printf("finalizando\n");
}
