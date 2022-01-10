TARGET:=main
SRC:=$(wildcard *.cpp)
OBJ:=$(SRC:%.cpp=%.o)
CC:=g++
LDFLAGS:= -L.


$(TARGET):$(SRC)
	$(CC) $^ -o $@ $(LDFLAGS) -lalgorithm

clean:
	rm -fr *.o