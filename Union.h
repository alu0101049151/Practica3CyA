 /* *
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Asignatura: Computabilidad y Algoritmia (CyA)
  * Curso: 2º
  * Práctica 3 CyA - Calculadora para Lenguajes Formales
  * Autor: Basilio Gómez Navarro
  * Correo: alu0101049151@ull.edu.es
  * Fecha 6/10/2019
  * Archivo Calculadora.h: Clase Union. Representa la operación 'unión' entre
	*                        dos lenguajes.
	*
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */


#ifndef PRACTICA3_UNION_H
#define PRACTICA3_UNION_H

#include "Lenguaje.h"

class Union
{
	public:

		Union(Lenguaje& lenguaje1, Lenguaje& lenguaje2);

		~Union();

		//Realiza la union de los lenguajes.
		Lenguaje unir();
		
	private:
		Lenguaje lenguaje1_;
		Lenguaje lenguaje2_;
};


#endif //PRACTICA3_UNION_H
