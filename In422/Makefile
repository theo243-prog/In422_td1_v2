# Le nom de l'exécutable
TARGET = hello

# Le compilateur
CC = gcc

# Les options de compilation
CFLAGS = -Wall -Wextra

all: $(TARGET)

$(TARGET): hello.c
	$(CC) $(CFLAGS) hello.c -o $(TARGET)

clean:
	rm -f $(TARGET)
