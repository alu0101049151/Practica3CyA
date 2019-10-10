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
  * Archivo Sublenguajes.h: Clase Sublenguaje. Representa la operación para comprobar
  *                         si lenguaje1_ es sublenguaje de lenguaje2_.
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

  #include "Sublenguaje.h"

  Sublenguaje::Sublenguaje (Lenguaje lenguaje1, Lenguaje lenguaje2):
    lenguaje1_(lenguaje1),
    lenguaje2_(lenguaje2){}

  Sublenguaje::~Sublenguaje (){}



  //Devuelve true si lenguaje1_ es sublenguaje de lenguaje2_
  bool Sublenguaje::sublenguajes ()
  {
    bool es_sublenguaje = false;
    Lenguaje resultado;
    if (lenguaje1_.getLenguaje().size() <= lenguaje2_.getLenguaje().size()) {
      for (auto i: lenguaje1_.getLenguaje()) {
        for (auto j: lenguaje2_.getLenguaje()) {
          if (i == j)
            resultado.insertLenguaje(i);
        }
      }
      if (resultado.getLenguaje().size() == lenguaje1_.getLenguaje().size()) {
        es_sublenguaje = true;
      }
    }
    return es_sublenguaje;
  }
