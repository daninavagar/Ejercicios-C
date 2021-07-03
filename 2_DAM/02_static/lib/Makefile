cc = g++

CFLAGS = -g
LDFLAGS = -lui -L lib/ -I lib


TARGET = libui
DEPS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

$(TARGET): $(DEPS)
	ar cr $(TARGET).a $^

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

.PHONY: clean


clean:
	$(RM) $(TARGET) *.o

