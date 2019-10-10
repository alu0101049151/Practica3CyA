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
  * Archivo Igualdad.h: Clase Igualdad. Representa la operación para comprobar
  *                         si lenguaje1_ es igual que lenguaje2_.
  *                         En este fichero se encuentra la definición de la clase.
  *
  * Referencias:
  *                   Enunciado de la prácita:
  *                   https://campusvirtual.ull.es/1920/pluginfile.php/159482/mod_assign/introattachment/0/
  *                   CYA_1920_Practica_3.pdf?forcedownload=1
  *
  * Historial de revisiones
  *                   6/10/2019 - Creación (primera versión) del código
  * */

#ifndef PRACTICA3_IGUALDAD_H
#define PRACTICA3_IGUALDAD_H

#include "Lenguaje.h"

class Igualdad
{
public:
  Igualdad (std::string& lenguaje1, std::string& lenguaje2);
  ~Igualdad ();

  //Devuelve true si lenguaje1_ es igual a lenguaje2_
  bool iguales ();

private:
  std::string lenguaje1_;
  std::string lenguaje2_;

};

#endif //PRACTICA3_IGUALDAD_H
