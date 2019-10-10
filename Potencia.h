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
  * Archivo Potencia.h: Clase Potencia. Representa la operación potencia para un
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

#ifndef PRACTICA3_POTENCIA_H
#define PRACTICA3_POTENCIA_H

#include "Lenguaje.h"
#include "Concatenacion.h"

class Potencia
{
public:
  Potencia (Lenguaje lenguaje, int exponente);
  ~Potencia ();

  int geteExponente() const;

  //Devuelvela Potencia de lenguaje1_
  Lenguaje elevar ();

private:
  Lenguaje lenguaje_;
  int exponente_;

};

#endif //PRACTICA3_POTENCIA_H
