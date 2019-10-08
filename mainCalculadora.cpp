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
  * Archivo Lenguaje.cpp: Contiene la función main del proyecto que usa la
	*                       clase Calculadora para llevar a cabo la operación
	*                       solicitada por el usuario por línea de comandos con
	*                       los lenguajes especificados en el fichero de entrada.
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



int main (int argc, char const* argv[])
{
	if (argv[1] == NULL) {
		//AYUDA DEL PROGRAMA
	}
	else {
		std::string entrada = argv[1];
		std::string salida = argv[2];
		std::string codigostr = argv[3];
		int codigo = std::stoi( codigostr );
		
		if (argv[4] != NULL) {
			std::string exponentestr = argv[4];
			int exponente = std::stoi( exponentestr );
			Calculadora calculadora(entrada, salida, codigo, exponente);
			calculadora.ejecutarCalculadora();
		}
		else {
			Calculadora calculadora(entrada, salida, codigo);
			calculadora.ejecutarCalculadora();
		}

		return 0;
	}
}
