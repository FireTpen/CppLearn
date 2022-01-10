LIBSO = libalgorithm.so
SRC:=$(wildcard *.cpp)
OBJ:=$(SRC:%.cpp=%.o)
CC:= g++

$(LIBSO):$(OBJ)
	$(CC) -shared $^ -o $@

$(OBJ):$(SRC)
	$(CC) $^ -c -fpic

.PHONY:
clear:
	rm -rf $(OBJ)
