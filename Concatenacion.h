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
  * Archivo Concatenacion.h: Clase Concatecacion. Representa la operación 'concatenación'
	*                          entre dos lenguajes (se concatena el primer
	*                          lenguaje con el segundo).
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

  #ifndef PRACTICA3_CONCATENACION_H
  #define PRACTICA3_CONCATENACION_H

  #include "Lenguaje.h"

  class Concatenacion
  {
		public:
			Concatenacion (Lenguaje lenguaje1, Lenguaje lenguaje2);
			~Concatenacion ();

			//Realiza la concatenación de lenguaje1_ con lenguaje2_
			Lenguaje concatenar();

      void setConcatenacion(Lenguaje lenguaje1, Lenguaje lenguaje2);

		private:
			Lenguaje lenguaje1_;
			Lenguaje lenguaje2_;
	};

  #endif //PRACTICA3_CONCATENACION_H
