# TAR = test
# OBJ = *.o
# CC := g++
# RMRF := rm -rf	#rm -rf 是linux删除指令

# #通配符 $^指所有的依赖文件 $@指所有的目标文件 $<指所有依赖文件的第一个文件

# $(TAR):$(OBJ)
# 	$(CC) $^ -o $@	

# *.o:*.cpp
# 	$(CC) -c $^ -o $@

# .PHONY:
# clearall:
# 	$(RMRF) $(OBJ) $(TAR)
# clear:
# 	$(RMRF) $(OBJ)

CC = g++
CFLAGS=-Wall
TARGET=main
SRCS:=$(wildcard *.cpp)
OBJS:=$(patsubst %cpp,%o,$(SRCS))

all:$(TARGET)
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

 .PHONY:
 clean:
	rm -f *.o $(TARGET)