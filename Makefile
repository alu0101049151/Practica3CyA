CC=g++
CXXFLAGS=-std=c++11 -g

OBJS = Cadena.o Lenguaje.o Kleene.o Positivo.o Inversa.o Potencia.o Union.o Concatenacion.o Diferencia.o Interseccion.o Sublenguaje.o Igualdad.o Calculadora.o mainCalculadora.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o Calculadora ${OBJS}

clean:
	rm -rf *.o Calulcadora
