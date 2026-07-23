CC = g++
CFLAGS = -Wall -Wextra -O2 -Iinclude

LIBS = -lGLEW -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl

TARGET = bin/main
SRC = src/application.cpp src/gl.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)
	./bin/main
clean:
	rm -r $(TARGET)
