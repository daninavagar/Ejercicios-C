cc = g++ # variable

TARGET = segundo # TARGET -> nombre del ejecutable, para poner variable $(TARGET) $@
# DEPS = portada.o main.o  DEPS -> son las depencias $(DEPS)
DEPS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
#patsubs -> pater subtitution, recibe 3 parametros, los archivos iniciales los .pp, por lo que va a cambiar osea los .o, en la lista del wildcard
# wildcard -> busca en el sistema de ficheros, busca todos los cpp


$(TARGET): $(DEPS)
	$(CC) -o $@ $^

#$@ es el target.
#$^ son las dependecias, coge los .o

#main.o: main.cpp
#	g++ -c main.cpp
#portada.o: portada.cpp
#
#g++ -c portada.cpp

%.o: %.cpp 
	$(CC) -c $<
# $< coge los cpp

.PHONY: clean

clean:
	$(RM) $(TARGET) *.o
