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
		output_file.open(salida_);

		std::string leido1;
		std::string leido2;

		while (!input_file.eof()) {

			std::getline(input_file, leido1);

			std::cout << "Leido1: " << leido1 << NEWLINE;

			if (!leido1.empty()) {
				Lenguaje lenguaje1(leido1);

				std::cout << "Lenguaje 1: \n";
				lenguaje1.writeLenguaje(std::cout);

				if (codigo_ < 7) { //Si es una operación binaria
					std::getline(input_file, leido2);

					//std::cout << "Leido2: " << leido2 << NEWLINE;
					Lenguaje lenguaje2(leido2);

					switch (codigo_) {
						case 1: //Concatenación
						{
						   Lenguaje resultado;
							 Concatenacion concatenacionLenguajes(lenguaje1, lenguaje2);
							 resultado = concatenacionLenguajes.concatenar();
							 std::cout << "Concatenacion: " << NEWLINE;
							 resultado.writeLenguaje(output_file);
						   break;
						 }
						case 2: //Unión
						{
						   Lenguaje resultado;
							 Union unionLenguajes(lenguaje1, lenguaje2);
							 resultado = unionLenguajes.unir();
							 std::cout << "Resultado: " << NEWLINE;
							 resultado.writeLenguaje(output_file);
							 break;
						 }
						 case 3: //Intersección
						 {
							 Lenguaje resultado;
							 Interseccion interseccionLenguajes(lenguaje1, lenguaje2);
							 resultado = interseccionLenguajes.intersecar();
							 std::cout << "Intersección: \n";
							 resultado.writeLenguaje(output_file);
							 break;
						 }
						 case 4: //Diferencia
						 {
							 Lenguaje resultado;
							 Diferencia diferenciaLenguajes(lenguaje1, lenguaje2);
							 resultado = diferenciaLenguajes.diferenciar();
							 std::cout << "Direferencia: \n";
							 resultado.writeLenguaje(output_file);
							 break;
						 }
						 case 5: //Sublenguajes
						 {
							 Sublenguaje sublenguajesLenguaje(lenguaje1, lenguaje2);
							 if (sublenguajesLenguaje.sublenguajes ())
							   output_file << "TRUE" << NEWLINE;
							 else
							   output_file << "FALSE" << NEWLINE;
						 }
						 case 6: //Igualdad
						 {
							 Igualdad igualdadLenguajes(leido1, leido2);
							 if (igualdadLenguajes.iguales ())
							   output_file << "TRUE" << NEWLINE;
						   else
							   output_file << "FALSE" << NEWLINE;
						 }
					 }
				}
				else  {

					switch (codigo_) {
						case 7: //Inversa
						{
							Lenguaje resultado;
							Inversa inversaLenguaje(lenguaje1);
							resultado = inversaLenguaje.invertir();
							std::cout << "Inversa: \n";
							resultado.writeLenguaje(output_file);
							break;
						}
						case 8: //Potencia
						{
							Lenguaje resultado;
							Potencia potenciaLenguaje(lenguaje1, exponente_);
							resultado = potenciaLenguaje.elevar();
							resultado.writeLenguaje(output_file);
							break;
						}
						case 9: //Cierre positivo
						{
							Lenguaje resultado;
							Positivo positivoLenguaje(lenguaje1);
							resultado = positivoLenguaje.cierrePositivo();
							resultado.writeLenguajeInfinito(output_file);
							break;
						}
						case 10: //Cierre Kleene
						{
							Lenguaje resultado;
							
						}
					}
				}
			}
		}
	}

}
