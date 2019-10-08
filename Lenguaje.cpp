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
  * Archivo Lenguaje.cpp: Clase Lenguaje. Representa Lenguaje (formal), esto es,
  *                   por un conjunto de cadenas. Este fichero contiene la
  *                   implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */


#include "Lenguaje.h"


Lenguaje::Lenguaje (std::string& lenguaje)
{
	fillLenguaje(lenguaje);
}



Lenguaje::Lenguaje (const Lenguaje& lenguaje):
	lenguaje_(lenguaje.lenguaje_){}



Lenguaje::~Lenguaje (){}



std::set<Cadena>	Lenguaje::getLenguaje () const 
{
	return lenguaje_;
}



void Lenguaje::fillLenguaje (std::string& lenguaje)
{
	std::string token; //Token leído del string que contiene el lenguaje leído del fichero.
	std::stringstream iss(lenguaje);
	std::string to_cadena; //String a insertar en el lenguaje.

	for (int i = 0; i < lenguaje.size(); ++i) {
		iss >> token;
		if (!token.empty()) {
			to_cadena = tratamiento(token);
			Cadena to_insert(to_cadena);
			lenguaje_.insert(to_insert);
		}
	}
}


std::string Lenguaje::tratamiento (std::string& token)
{
	std::regex corchete_principio("{(\\w)+,");
	std::regex corchete_final(",(\\w)+}");
	std::regex coma("(\\w)+,");
	std::string to_return;

	if (token == VACIO) {
		return token;
	}

	if (std::regex_match(token, corchete_principio) || std::regex_match(token, corchete_final)) {
		to_return = token.substr(1, token.size()-1);
		std::cout << "To_Reteurn principio / final: " << to_return << NEWLINE;
		return to_return;
	}

	if (std::regex_match(token, coma)) {
		to_return = token.substr(0, token.size()-1);
		std::cout << "To_Return coma: " << to_return << NEWLINE;
		return to_return;
	}
}
