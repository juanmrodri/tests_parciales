/*
 ============================================================================
 Name        : pruebas_parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "strings.h"
#define LOC_LEN 10

int main(void) {
	setbuf(stdout, NULL);

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



}
