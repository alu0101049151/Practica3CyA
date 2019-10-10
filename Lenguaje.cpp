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


Lenguaje::Lenguaje() {}



Lenguaje::~Lenguaje (){}



std::set<Cadena>	Lenguaje::getLenguaje () const
{
	return lenguaje_;
}

void Lenguaje::insertLenguaje(Cadena cadena)
{
	lenguaje_.insert(cadena);
}


void Lenguaje::clearLenguaje()
{
	lenguaje_.clear();
}



//Extrae las cadenas del string leído y las inserta en el set de cadenas
//(lenguaje)
void Lenguaje::fillLenguaje (std::string& lenguaje)
{
	std::string token; //Token leído del string que contiene el lenguaje leído del fichero.
	std::stringstream iss(lenguaje);
	std::string to_cadena; //String a insertar en el lenguaje.

	for (int i = 0; i < lenguaje.size(); ++i) {
		iss >> token;
		std::cout << "Token de fillLenguaje " << token << "\n";
		if (!token.empty()) {
			to_cadena = tratamiento(token);
	//std::cout << "Ha pasado tratamiento\n";
			Cadena to_insert(to_cadena);
			lenguaje_.insert(to_insert);
		}
		token.clear();
	}
}



//Limpia el token eliminando '}' '{' ',' y deja solo la palabra para crear el
//objeto cadena a introducir en el lenguaje.
//En caso de que sea el lenguaje vacío, se creará una cadena que contenga
//solamente '{}' y será la única cadena del lenguaje.
std::string Lenguaje::tratamiento (std::string& token)
{
	//std::cout << "Ha entrado en tratamiento\n";
	std::cout << "Token en tratamiento: " << token << "\n";
	std::regex corchete_principio("[{](\\w)+,");
	std::regex corchete_final("(\\w)+}");
	std::regex coma("(\\w)+,");
	std::regex unitario("[{][\\W\\w]+[}]");
	std::string to_return = "&";
	//std::cout << "Ha pasado las instancias de las REGEX\n";

	if (token == VACIO) {
		//std::cout << "Ha entrado en if (token == VACIO)\n";
		return token;
	}

	if (std::regex_match(token, corchete_principio) || std::regex_match(token, unitario)) {
		to_return = token.substr(1, token.size()-2);
		std::cout << "To_Reteurn principio: / unitario " << to_return << NEWLINE;
		return to_return;
	}

	if (std::regex_match(token, corchete_final)) {
		to_return = token.substr(0, token.size()-1);
		//std::cout << "final: " << to_return << NEWLINE;
		return to_return;
	}

	if (std::regex_match(token, coma)) {
		to_return = token.substr(0, token.size()-1);
		//std::cout << "To_Return coma: " << to_return << NEWLINE;
		return to_return;
	}

	return to_return;
}



Lenguaje& Lenguaje::operator= (const Lenguaje& lenguaje)
{
	this->lenguaje_ = lenguaje.lenguaje_;
	return *this;
}


void Lenguaje::writeLenguaje(std::ostream& os) const
{
	std::set<Cadena>::iterator it = lenguaje_.begin();
	std::string aImprimir;
	int i = 1;
	os << "{";
	for (; it != lenguaje_.end(); ++it) {
		  os << (*it).getCadena();
			if (i == lenguaje_.size())
				os << "}" << NEWLINE;
			else
			  os << ", ";
			i++;
	}
	std::cout << NEWLINE;
}
