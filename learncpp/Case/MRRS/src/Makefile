TARGET = main
SRC = $(wildcard *.cpp)
OBJ = $(wildcard *.o)
CC = g++

$(TARGET):$(SRC)
	$(CC) $^ -o $@

.PHONY:
clear:
	rm -rf $(OBJ)