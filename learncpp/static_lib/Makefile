LIBA = libalgorithm.a
SRC:=$(wildcard *.cpp)
OBJ:=$(SRC:%.cpp=%.o)
CC:= g++
AR:= ar

$(LIBA):$(OBJ)
	$(AR) rcs $@ $^

$(OBJ):$(SRC)
	$(CC) $^ -c

.PHONY:
clear:
	rm -rf $(OBJ)
