//============================================================================
// Name        : Clase.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Pagina 79
//============================================================================

#include <iostream>
using namespace std;

#include "LibroCalificaciones.h"

int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	string nombreDelCurso;

	LibroCalificaciones miLibroCalificaciones1( "CS101 Introduccion a la programacion en C++" );
	LibroCalificaciones miclase ("Juanito");
	LibroCalificaciones miLibroCalificaciones2( "CS102 Estructuras de datos en C++" );


	cout << "Esto es mi prueba: " << miclase.getNombreCurso() << endl;

	cout << "El nombre inicial del curso 1: " << miLibroCalificaciones1.getNombreCurso() << endl;
	cout << "El nombre inicial del curso 2: " << miLibroCalificaciones2.getNombreCurso() << endl;

	miLibroCalificaciones1.setNombreCurso("CS101 Introduccion a la programacion en C++dasdadasdasdasdasdasdasdasdada");


	return 0;
}
