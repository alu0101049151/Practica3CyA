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
  * Archivo Concatenacion.h: Clase Concatecacion. Representa la operación 'concatenación'
  *                          entre dos lenguajes (se concatena el primer
	*                          lenguaje con el segundo). En este fichero se encuentra
	*                          la implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#include "Concatenacion.h"

Concatenacion::Concatenacion (Lenguaje lenguaje1, Lenguaje lenguaje2):
	lenguaje1_(lenguaje1),
	lenguaje2_(lenguaje2){}

Concatenacion::~Concatenacion (){}

Lenguaje Concatenacion::concatenar ()
{
	Lenguaje resultado;
	std::string nueva_cadena;

	for (auto i: lenguaje1_.getLenguaje()) {
		for (auto j: lenguaje2_.getLenguaje()) {
			nueva_cadena.append(i.getCadena());
			nueva_cadena.append(j.getCadena());
			Cadena aInsertar(nueva_cadena);
			resultado.insertLenguaje(aInsertar);
			nueva_cadena.clear();
		}
	}
	return resultado;
}
