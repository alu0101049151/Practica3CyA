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
  * Archivo Lenguaje.h: Clase Lenguaje. Representa Lenguaje (formal), esto es,
	*                   por un conjunto de cadenas. Fichero de cabeceras,
	*                   contiene la definición de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
	*
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#ifndef PRACTICA3_Lenguaje_H
#define PRACTICA3_Lenguaje_H

#include <set>
#include <sstream>
#include <regex>

#include "Cadena.h"


//CONSTANTES
const char NEWLINE = '\n';
const std::string CORCHETE1 = "{";
const std::string CORCHETE2 = "}";
const std::string ESPACIO = " ";
const std::string COMA = ",";
const std::string SIGMA = "&";
const std::string VACIO = "{}";



class Lenguaje
{
	public:
		//Constructor de la clase. Se le pasa el string leído del fichero con los
		//lenguajes
		Lenguaje (std::string& lenguaje);

		Lenguaje (const Lenguaje& L);

		Lenguaje ();

		~Lenguaje ();

		std::set<Cadena>	getLenguaje () const;

		void insertLenguaje(Cadena cadena);

		//SET_LENGUAJE(?????)
	  Lenguaje& operator= (const Lenguaje& lenguaje);


 	   void writeLenguaje(std::ostream& os) const;

		 void writeLenguajeInfinito(std::ostream& os) const;

		 void clearLenguaje();

	protected:
	   //Extrae las cadenas del string leído y las inserta en el set de cadenas
	   //(lenguaje)
	   void fillLenguaje (std::string& lenguaje);


	   //Limpia el token eliminando '}' '{' ',' y deja solo la palabra para crear el
	   //objeto cadena a introducir en el lenguaje.
	   //En caso de que sea el lenguaje vacío, se creará una cadena que contenga
	   //solamente '{}' y será la única cadena del lenguaje.
	   std::string tratamiento (std::string& token);

	private:
		  std::set<Cadena> lenguaje_;

};

#endif // PRACTICA3_Lenguaje_H
