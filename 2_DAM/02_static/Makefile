cc = g++

CFLAGS = -g -I lib/
LDFLAGS = -lui -L lib/


TARGET = ahorcado
DEPS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

$(TARGET): $(DEPS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

.PHONY: clean


clean:
	$(RM) $(TARGET) *.o

