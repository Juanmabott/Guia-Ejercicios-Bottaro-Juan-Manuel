/*
 ============================================================================
 Name        : Menus.c
 Author      : Bottaro Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void) {
	setbuf(stdout,NULL);
	int opcion=0;
	int banderaIniciar=0;
	int banderaProcesar=0;
	char continuar;
	do{
		opcion=menu();
		switch(opcion)
		{
		case 1:
			inicializar();
			banderaIniciar=1;
			break;
		case 2:
			if(banderaIniciar==1)
			{
				procesar();
				banderaProcesar=1;
			}
			else
			{
				printf(" debe iniciar antes de procesar\n");
			}

			break;
		case 3:
			if(banderaIniciar==1 && banderaProcesar==1)
						{
							finalizar();
						}
						else
						{
							if(banderaIniciar!=1)
							{
								printf(" debe iniciar antes de finalizar\n");
							}
							else
							{
								printf("debe procesar antes de finalizar\n");
							}
						}
			break;
		case 4:
			continuar=salir();
			break;
		default:
			printf("seleccione una opcion valida del 1 al 4\n");
			break;

		}
	}while(continuar!='s');

}

