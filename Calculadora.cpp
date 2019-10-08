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
  *                   solicita en el enunciado. Dado un fichero de entrada, que
  *                   contiene varios lenguajes, la calculadora permite realizar
  *                   determinadas operaciones con lenguajes formales e imprimir
  *                   los resultados de las misas en el fichero de salida pasado
  *                   por línea de comandos.
  *                   Fichero de cabeceras, contiene la definición de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#include "Calculadora.h"

Calculadora::Calculadora (std::string& entrada, std::string& salida, int codigo):
	codigo_(codigo),
	entrada_(entrada),
	salida_(salida){}


Calculadora::Calculadora (std::string& entrada, std::string& salida, int codigo, int exponente):
	codigo_(codigo),
	entrada_(entrada),
	salida_(salida),
  exponente_(exponente){}

Calculadora::~Calculadora (){}



int Calculadora::getCodigo () const
{
	return codigo_;
}



void Calculadora::setCodigo (int codigo) 
{
	codigo_ = codigo;
}



void Calculadora::ejecutarCalculadora () 
{
	std::ifstream input_file;
	std::ofstream output_file;

	input_file.open(entrada_);

	if (!input_file.is_open())
		std::cerr << "Ha habido un problema al abrir el fichero de entrada, por favor inténtelo de nuevo" << NEWLINE;
	
	else {
		std::string leido1; //Almacenará la línea leida del fichero.
		std::string leido2; //Almacenará la segunda linea leída (en caso de ser operaciones binarias

		while (!input_file.eof()) {
			    output_file.open(salida_);
					
					std::getline(input_file, leido1);
				  Lenguaje lenguaje1(leido1);

					if (codigo_ < 7) {
					    std::getline(input_file, leido2);
							Lenguaje enguaje2(leido2);

							switch (codigo_)
							{
								case 1:
									Lenguaje resultado;
									/*Concatenacion concatenacion(lenguaje1, lenguaje2);
									resultado = concatenacion.concatenar();
									resultado.write(output_file);
									break;*/
									//FALTAN EL RESTO DE CASOS
							}
					}

					else {
						switch (codigo_)
						{
							case 7:
								Lenguaje resultado;
								/*Inversa inversa(lenguaje1);
								resultado = inversa.invertir();*/
						}
					}
				}
	}

}

