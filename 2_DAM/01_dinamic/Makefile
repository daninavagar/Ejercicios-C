cc = g++

CFLAGS = -g



TARGET = ahorcado
DEPS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

$(TARGET): $(DEPS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

.PHONY: clean


clean:
	$(RM) $(TARGET) *.o

