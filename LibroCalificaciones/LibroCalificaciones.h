/*
 * LibroCalificaciones.h
 *
 *  Created on: 10 may. 2021
 *      Author: juan.bueno
 */

#ifndef INC_LIBROCALIFICACIONES_H_
#define INC_LIBROCALIFICACIONES_H_

class LibroCalificaciones
{
public:
	LibroCalificaciones( string nombre );
	LibroCalificaciones( );

	void setNombreCurso( string nombre );

	string getNombreCurso();

	void mostrarMensaje();

private:
	string nombreCurso;
};


#endif /* INC_LIBROCALIFICACIONES_H_ */
