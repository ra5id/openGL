CC = g++
CFLAGS = -Wall -Wextra -O2

LIBS = -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl

TARGET = bin/main
SRC = src/application.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)
	./bin/main
clean:
	rm -r $(TARGET)
