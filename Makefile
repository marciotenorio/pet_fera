APPS = ./apps
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src
DATA = ./data

FLAGS = -O3 -Wall -std=c++11
LIBS = -led -lm -L $(LIB)

all: libed app


libed: \
		$(OBJ)/employee.o \
		$(OBJ)/handler.o \
		$(OBJ)/veterinary.o \
		$(OBJ)/exotic_amphibian.o \
		$(OBJ)/exotic_animal.o \
		$(OBJ)/exotic_bird.o \
		$(OBJ)/exotic_mammal.o \
		$(OBJ)/exotic_reptile.o \
		$(OBJ)/native_amphibian.o \
		$(OBJ)/native_animal.o \
		$(OBJ)/native_bird.o \
		$(OBJ)/native_mammal.o \
		$(OBJ)/native_reptile.o \
		$(OBJ)/amphibian.o \
		$(OBJ)/animal.o \
		$(OBJ)/bird.o \
		$(OBJ)/mammal.o \
		$(OBJ)/reptile.o \
		$(OBJ)/wild_animal.o \
		$(OBJ)/petfera.o
		ar -rcs $(LIB)/libed.a $(OBJ)/*.o


app: $(BIN)/main


$(OBJ)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
		g++ $(FLAGS) -c $< -I $(INCLUDE) -o $@


$(BIN)/%: $(APPS)/%.cpp
		g++ $(FLAGS) $< -I $(INCLUDE) $(LIBS) -o $@


run:
		$(BIN)/main


clean:
		rm $(OBJ)/*.o
		rm $(BIN)/*
		rm $(LIB)/*
