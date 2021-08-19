APP = ./app
OBJ = ./obj
INCLUDE = ./includes
SRC = ./src
BIN = ./bin
LIB = ./lib

FLAGS = -O3 
LIBS = -lm -libgr


all: createfolders lib myapp 

createfolders:
	 mkdir -p $(LIB) $(OBJ) $(BIN)

lib:  $(OBJ)/graph.o \
	$(OBJ)/list.o \
	$(OBJ)/vertex.o 
	ar -rcs $(LIB)/libgr.a $(OBJ)/*.o
run: 
	./bin/main

myapp: clean_app \
	$(BIN)/main \
	run

$(OBJ)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	g++ $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APP)/%.cpp 
	g++ $(FLAGS) $< -lgr  -L $(LIB) -I $(INCLUDE) -o $@

clean: 
	rm -rf $(BIN)/* $(OBJ)/*

clean_app: 
	rm -rf $(BIN)/*

