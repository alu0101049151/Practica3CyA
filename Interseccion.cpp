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
  * Archivo Concatenacion.h: Clase Interseccion. Representa la operación 'intersección'
  *                          entre dos lenguajes. En este fichero se encuentra
  *                          la implementación de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#include "Interseccion.h"

Interseccion::Interseccion (Lenguaje lenguaje1, Lenguaje lenguaje2):
  lenguaje1_(lenguaje1),
  lenguaje2_(lenguaje2){}


Interseccion::~Interseccion (){}


Lenguaje Interseccion::intersecar()
{
  Lenguaje resultado;

  for (auto i: lenguaje1_.getLenguaje()) {
    for (auto j: lenguaje2_.getLenguaje()) {
      if (i == j)
        resultado.insertLenguaje(i);
    }
  }
  if (resultado.getLenguaje().empty()) { //Si la intersección es vacío
    std::string vacio = "";
    Cadena cadena_auxiliar(vacio);
    resultado.insertLenguaje(cadena_auxiliar);
  }

  return resultado;
}
