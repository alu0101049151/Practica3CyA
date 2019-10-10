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
  * Archivo Positivo.h: Clase Positivo. Representa la operación cierre Positivo para un
  *                         lenguaje formal.
  *                         En este fichero se encuentra la implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */


#include "Positivo.h"

Positivo::Positivo (Lenguaje lenguaje):
  lenguaje_(lenguaje){}

Positivo::~Positivo (){}

//Realiza el cierre positivo del lenguaje_
Lenguaje Positivo::cierrePositivo ()
{
  Lenguaje resultado;
  int exponente = 5;
  Potencia cierre(lenguaje_, exponente);
  resultado = cierre.elevar();
  return resultado;
}
