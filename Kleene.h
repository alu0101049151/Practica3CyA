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
  * Archivo Kleene.h: Clase Kleene. Representa la operación cierre de Kleene para un
  *                         lenguaje formal.
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

#ifndef PRACTICA3_KLEENE_H
#define PRACTICA3_KLEENE_H

#include "Lenguaje.h"
#include "Positivo.h"

class Kleene
{
public:
  Kleene (Lenguaje lenguaje);
  ~Kleene ();

  //Realiza el cierre de Kleene del lenguaje_
  Lenguaje cierreKleene ();

private:
  Lenguaje lenguaje_;
};
#endif //PRACTICA3_KLEENE_H
