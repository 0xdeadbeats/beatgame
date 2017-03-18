CC := g++
TARGET := 0xdeadbeats
SOURCEDIR := src/
SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))
BUILDDIR := build/
DEPS := $(shell find $(SOURCEDIR) -name '*.h')
CPPFLAGS := -I headers/ -Llib -L$(shell sdl2-config --libs) $(shell sdl2-config --cflags)
SDLFLAGS = -lGL -lSDL2 -lSDL2main -lpthread -lbass
CFLAGS := -std=c++11 -Wall

default: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS)  $< -c -o $@ $(SDLFLAGS)


$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(BUILDDIR)$@ $^ $(SDLFLAGS)

update:
	gtags

clean:
	rm -r $(OBJECTS) $(BUILDDIR)$(TARGET)

test:
	./$(BUILDDIR)$(TARGET)

prepare:
	mkdir ../build

btest:
	make
	make test