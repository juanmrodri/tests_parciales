/*
 * arrayCencista.h
 *
 *  Created on: 15 may 2022
 *      Author: jmrodri
 */

#ifndef ARRAYCENCISTA_H_
#define ARRAYCENCISTA_H_

typedef struct
{
	int dia; // > 0 ∧ < 32
	int mes; // > 0 ∧ < 13
	int anio; // > 1950 ∧ < 2004 es decir entre 72 y 18 anios

} fechaNacimiento;

typedef struct
{
	char calle[31];
	int altura;

}direccion;

typedef struct
{
	int id;
	char nombre[51];
	char apellido[51];
	fechaNacimiento fecha;
	int edad;
	direccion dir;
	int estado; // activo(dado de alta y disponible para asignacion de zona)- inactivo(dado de baja, id no disponible)- liberado(id disponible para una nueva asignacion de zona)
	int isEmpty;

} Cencista;



#endif /* ARRAYCENCISTA_H_ */
