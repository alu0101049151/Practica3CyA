CC=g++
CXXFLAGS=-std=c++11 -g

OBJS = Cadena.o Lenguaje.o Union.o Calculadora.o mainCalculadora.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o Calculadora ${OBJS}

clean:
	rm -rf *.o Calulcadora
