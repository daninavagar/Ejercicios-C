TARGET = calculadora
DEPS = $(patsubst %cpp, %o, $(wildcard *.cpp))
cc = g++

$(TARGET): $(DEPS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $<

.PHONY: clean

clean:
	$(RM) $(TARGET) *.o
