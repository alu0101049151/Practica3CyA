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

#include "Potencia.h"

Potencia::Potencia (Lenguaje lenguaje, int exponente):
  lenguaje_(lenguaje),
  exponente_(exponente){}

Potencia::~Potencia (){}

int Potencia::geteExponente() const
{
  return exponente_;
}

//Devuelvela Potencia de lenguaje1_
Lenguaje Potencia::elevar ()
{
  Lenguaje resultado;

  if (exponente_ == 0) {
    std::string vacio = SIGMA;
    Cadena cadenaVacia(vacio);
    resultado.insertLenguaje(cadenaVacia);
  }
  else {
    Concatenacion concatenarLenguajes(lenguaje_, lenguaje_);
    resultado = lenguaje_;
    for (int i = 0; i < exponente_-1; ++i) {
      concatenarLenguajes.setConcatenacion(lenguaje_, resultado);
      resultado = concatenarLenguajes.concatenar();
    }
  }
  return resultado;
}
