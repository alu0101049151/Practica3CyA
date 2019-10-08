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
  * Archivo Calculadora.h: Clase Calculadora. Es la calculadora de lenguajes formales que se
	* 									solicita en el enunciado. Dado un fichero de entrada, que
	* 									contiene varios lenguajes, la calculadora permite realizar
	* 									determinadas operaciones con lenguajes formales e imprimir
	* 									los resultados de las misas en el fichero de salida pasado
	* 									por línea de comandos.
	* 									Fichero de cabeceras, contiene la definición de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#ifndef PRACTICA3_Calculadora_H
#define PRACTICA3_Calculadora_H

#include <fstream>

#include "Lenguaje.h"

class Calculadora
{
	public:
		Calculadora (std::string& entrada, std::string& salida, int codigo);

		//Constructor que contiene el valor del exponente en caso de que se quiera
		//llevar a cabo la operación de potencia.
		Calculadora (std::string& entrada, std::string& salida, int codigo, int exponente);
		
		~Calculadora ();

		
		int getCodigo () const;
		
		void setCodigo (int codigo);

//	protected:
		//Lee el fichero con los lenguajes y determina la operación a realizar según
		//el código de identificación de cada operación.
		void ejecutarCalculadora ();

	private:
		int codigo_;          //Código de operación que identifica la operación a realizar.
		int exponente_;       //Es el exponente de la potencia (en caso de quere llevarla a cabo)
		std::string entrada_; //Nombre del fichero de entrada.
		std::string salida_;  //Nombre del fichero de salida.

};

#endif //PRACTICA3_Calculadora_H
