/*
 ============================================================================
 Name        : pruebas_parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

ej de reporte, 1) el cencista que senso mas zonas?


 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "strings.h"
#include "utn.h"
#define LOC_LEN 10

int main(void) {
	setbuf(stdout, NULL);

	int auxResponse;

	char localidades[LOC_LEN][15];
	int i;

	strcpy(localidades[0],"Almagro");
	strcpy(localidades[1],"Boedo");
	strcpy(localidades[2],"Devoto");
	strcpy(localidades[3],"Villa Crespo");
	strcpy(localidades[4],"Liniers");
	strcpy(localidades[5],"Mataderos");
	strcpy(localidades[6],"Palermo");
	strcpy(localidades[7],"Paternal");
	strcpy(localidades[8],"Hurlingham");
	strcpy(localidades[9],"El Palomar");

	for(i=0; i<LOC_LEN;i++)
	{
		printf("%s\n",localidades[i]);
	}

	// menu, pasar a biblioteca aparte

	do
	{
		printf("\n\n\t\t+++ Bienvenido al sistema de censo 2022 +++\n\n");
		if(utn_getNumber(&auxResponse, "\n\tElija una opcion?\n\n"
				"\t\t1) Cargar censista\n"
				"\t\t|\n"
				"\t\t2) Modificar censista\n"
				"\t\t|\n"
				"\t\t3) Dar de baja censista\n"
				"\t\t|\n"
				"\t\t4) Cargar Zona\n"
				"\t\t|\n"
				"\t\t5) Asignar zona a censar\n"
				"\t\t|\n"
				"\t\t6) cargar datos\n"
				"\t\t|\n"
				"\t\t7) Mostrar censistas\n"
				"\t\t|\n"
				"\t\t8) Mostrar zonas\n\n\t------------> ", "\n\tError en la seleccion\n\n", 1, 5, 2)==0)
		{
			switch(auxResponse)
			{
			// cargar cencista
			case 1:
				break;
			}
		}
	}while(auxResponse!=5);



}
