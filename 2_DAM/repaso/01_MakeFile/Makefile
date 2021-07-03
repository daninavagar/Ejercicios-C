cc = g++;

TARGET = Calculadora

DEPS = $(patsubst %cpp, %o, $(wildcard *.cpp))

$(TARGET) : $(DEPS)
	$(CC) -o $@ $^

%.o : %.cpp
	$(CC) -c $<

.PHONY: borrar

borrar:
	$(RM) $(TARGET) *.o
