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
  * Archivo Cadena.cpp: Clase cadena. Representa una secuencia finita de símbolos
  *                   de un determinado alfabeto. Este fichero contiene la
	*                   implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */


#include "Cadena.h"

Cadena::Cadena (std::string& cadena):
	cadena_(cadena){}

//Por defecto se inicializa a la cadena vacía
Cadena::Cadena ():
	cadena_("&"){}

Cadena::Cadena (const Cadena& C):
	cadena_(C.cadena_){}



Cadena::~Cadena(){}


//========Getters & Setters===================

std::string Cadena::getCadena () const
{
	  return cadena_;
}

void Cadena::setCadena (std::string cadena)
{
	cadena_ = cadena;
}

//===============================================

Cadena Cadena::invertirCadena()
{
	std::string inversa = cadena_;

	for (int i = 0; i < getCadena().size()/2; ++i) {
		std::swap(inversa[i], inversa[getCadena().size()-i-1]);
	}
	Cadena invertida(inversa);
	return invertida;
}

//=========SOBRECARGA DE OPERADORES=============

Cadena& Cadena::operator= (const Cadena& cadena)
{
	this->cadena_ = cadena.cadena_;
	return *this;
}



int Cadena::operator== (const Cadena& cadena) const
{
	if (this->cadena_ != cadena.cadena_) return 0;
  return 1;
}



int Cadena::operator< (const Cadena& cadena) const
{
	if (this-> cadena_ < cadena.cadena_) return 1;
  return 0;
}


std::ostream& operator<<(std::ostream& os, const Cadena& cadena)
{
	os << cadena.cadena_ << std::endl;
	return os;
}
