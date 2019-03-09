APPS = ./apps
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src

FLAGS = -O3 -Wall -std=c++11
LIBS = -led -lm -L $(LIB)

all: libed app


libed: \
		$(OBJ)/flat_geometry.o \
		$(OBJ)/spatial_geometry.o
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
