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
 * Archivo Cadena.h: Clase cadena. Representa una secuencia finita de símbolos
 *                   de un determinado alfabeto. Este fichero contiene la 
 *                   definición de la clase.
 *
 * Referencias:
 *                   Enunciado de la prácita:
 *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
 *                   CYA_1920_Practica_3.pdf?forcedownload=1
 * Historial de revisiones
 *                   6/10/2019 - Creación (primera versión) del código
 * */
 
#ifndef PRACTICA3_Cadena_H
#define PRACTICA3_Cadena_H

#include <iostream>
#include <string>


class Cadena
{
	public:
		Cadena(std::string& cadena);
		Cadena();
		Cadena(const Cadena& C);
		~Cadena();

		std::string getCadena() const;
	  void setCadena(std::string set);

		Cadena& operator=(const Cadena& cadena);
		int operator==(const Cadena& cadena) const;
		int operator<(const Cadena& cadena) const;

	private:
		std::string cadena_;

};

#endif //PRACTICA3_Cadena_H
