OBJS = main.cpp 

CC = g++

COMPILER_FLAGS = -I./json/include

OBJ_NAME = ABBY

all : $(OBJS) 
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
