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
  * Archivo Concatenacion.h: Clase Diferencia. Representa la operación 'diferencia'
  *                          entre el lenguaje1_ y el lenguaje2_. En este fichero se encuentra
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
#include "Diferencia.h"

  Diferencia::Diferencia (Lenguaje lenguaje1, Lenguaje lenguaje2):
    lenguaje1_(lenguaje1),
    lenguaje2_(lenguaje2){}

  Diferencia::~Diferencia (){}

    Lenguaje Diferencia::diferenciar()
    {
      Lenguaje resultado;
      bool diferente; //Nos permite comprobar si es un elemento que no está en el lenguaje2_

      for (auto i: lenguaje1_.getLenguaje()) {
        diferente = true;
        for (auto j: lenguaje2_.getLenguaje()) {
          if (i == j)
            diferente = false;
        }
        if (diferente)
          resultado.insertLenguaje(i);
      }

      return resultado;
    }
