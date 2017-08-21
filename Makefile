# Cria os diretórios necessários
RM = rm -rf

PROG = corrida
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -std=c++11
OBJS = main.o Sapo.o

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

debug: CPPFLAGS += -g -O0
debug: $(PROG)

$(PROG): $(OBJ_DIR)/main.o $(OBJ_DIR)/Sapo.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel questao02 criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/Sapo.o: $(SRC_DIR)/Sapo.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

dir:
	mkdir -p bin build

clean: dir
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
