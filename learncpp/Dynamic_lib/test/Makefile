TARGET:=main
SRC:=$(wildcard *.cpp)
OBJ:=$(SRC:%.cpp=%.o)
CC:=g++
LDFLAGS:= -L.


$(TARGET):$(SRC)
	$(CC) $^ -o $@ $(LDFLAGS) -lalgorithm

clear:
	rm -fr *.o