/*
 * estructGenerica.h
 *
 *  Created on: May 9, 2020
 *      Author: catalina
 */

#ifndef ESTRUCTGENERICA_H_
#define ESTRUCTGENERICA_H_

#include "estructTipo.h"

//EN ESTE EJEMPLO, SOLO HAY UNA ESTRUCTURA
//EN EL CASO DE QUE HAYA MAS ESTRUCTURAS, HACER UNA DE CADA UNA DE ESTAS FUNCIONES POR CADA ESTRUCTURA CREADA! (COLOCAR EN SU RESPECTIVA LIBRERIA)

typedef struct{
	int id;
	char nombre[30];
	char apellido[30];
	int edad;
	int idTipo;
	int isEmpty;

}eGenerica;

//hacer tantas como estructuras haya
int inicializarG(eGenerica listaG[], int tamG);

//hacer tantas como estructuras haya
int buscarLibre(eGenerica listaG[], int tamG);

//hacer tantas como estructuras haya
int buscarGenericoPorId(int id, eGenerica listaG[], int tamG);

//hacer tantas como estructuras haya
void mostrarGenerico(eGenerica generico, eTipoG listaT[], int tamT);

//hacer tantas como estructuras haya
void mostrarGenericos(eGenerica listaG[], eTipoG listaT[], int tamT);


#endif /* ESTRUCTGENERICA_H_ */
