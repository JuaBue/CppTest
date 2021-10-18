/*
 * LibroCalificaciones.cpp
 *
 *  Created on: 10 may. 2021
 *      Author: juan.bueno
 */
#include <iostream>
#include <string>
using namespace std;

#include "LibroCalificaciones.h"

#define MAX_LENGTH_NAME 25

LibroCalificaciones :: LibroCalificaciones (string nombre)
{
	setNombreCurso( nombre );
}

void LibroCalificaciones :: setNombreCurso( string nombre )
{
	if ( nombre.length() <= MAX_LENGTH_NAME )
	{
		nombreCurso = nombre;
	}
	else if ( nombre.length() > MAX_LENGTH_NAME )
	{
		nombreCurso = nombre.substr(0, MAX_LENGTH_NAME);

		cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
				<< "Se limito el nombre del curso a los primeros 25 carácteres.\n" << endl;
	}
}

string LibroCalificaciones :: getNombreCurso()
{
	return nombreCurso;
}

void LibroCalificaciones :: mostrarMensaje()
{
	cout << "Bienvenido al libro de calificaciones para\n" << getNombreCurso() << "!" << endl;
}


