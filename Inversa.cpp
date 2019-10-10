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
  * Archivo Inversa.h: Clase Inversa. Representa la operación inversa para un
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

#include "Inversa.h"


Inversa::Inversa (Lenguaje lenguaje):
  lenguaje_(lenguaje){}

Inversa::~Inversa (){}

//Devuelvela inversa de lenguaje1_
Lenguaje Inversa::invertir ()
{
  Lenguaje resultado; //Contendrá la inversa de lenguaje_
  for (auto i: lenguaje_.getLenguaje()) {
    resultado.insertLenguaje(i.invertirCadena());
  }

  return resultado;
}
