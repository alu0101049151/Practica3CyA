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
  *                        dos lenguajes. En este fichero se encuentra la
	*                        implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#include "Union.h"

Union::Union(Lenguaje& lenguaje1, Lenguaje& lenguaje2):
	lenguaje1_(lenguaje1),
	lenguaje2_(lenguaje2){}

Union::~Union(){}

Lenguaje Union::unir ()
{
	Lenguaje resultado; 
	resultado = lenguaje1_;
	std::set<Cadena>::iterator it = resultado.getLenguaje().begin();
	
	if (resultado.getLenguaje().empty())
		std::cout << "El resultado está vacío\n";
	if (lenguaje1_.getLenguaje().empty())
		std::cout << "El lenguaje1_ está vacío\n";
	if (lenguaje2_.getLenguaje().empty())
		std::cout << "El lenguaje2_ está vacío\n";

	std::cout << "Principio del resultdao: " << lenguaje2_.getLenguaje().begin()->getCadena() << "\n";
	//resultado.getLenguaje().insert(lenguaje2_.getLenguaje().begin(), lenguaje2_.getLenguaje().end());
	return resultado;
}
