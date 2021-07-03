cc = g++
TARGET = produc_consum
DEPS = $(patsubst %cpp, %o, $(wildcard *.cpp))
LDFLAGS = -lpthread

$(TARGET): $(DEPS)
	$(CC) -o $@ $^ ${LDFLAGS}

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

