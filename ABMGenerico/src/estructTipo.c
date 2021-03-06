/*
 * estructTipo.c
 *
 *  Created on: May 9, 2020
 *      Author: catalina
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructTipo.h"

//EN EL CASO DE QUE HAYA MAS ESTRUCTURAS, HACER UNA DE CADA UNA DE ESTAS FUNCIONES POR CADA ESTRUCTURA CREADA!

//hacer tantas como tipos haya (sector, tipo de instrumento, raza)
int cargarDescripTipo(char descripcion[], int idTipo, eTipoG tipos[], int tamT)
{
	int isOk = 0;

	for(int i = 0; i < tamT; i++)
	{
		if(tipos[i].id == idTipo) //si el id del sector es igual al id sector que estoy buscando(lo pase por parametros)
		{
			strcpy(descripcion, tipos[i].descripcion); //copio a descripcion la descripcion que tengo en ese sector
			isOk = 1; //exito
			break;
		}
	}

	return isOk;
}

//hacer tantas como tipos haya (sector, tipo de instrumento, raza)
int mostrarTipos(eTipoG tipos[], int tamT)
{
	int isOk = 0;
	if(tipos != NULL)
	{
		isOk = 1;
		printf("*** Tipos ***\n");
		printf("  ID     Descripcion\n\n");

		for(int i = 0; i < tamT; i++)
		{
			printf("%d   %10s \n", tipos[i].id, tipos[i].descripcion);
		}
	}
	return isOk;
}
