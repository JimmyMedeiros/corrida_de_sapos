PROG = corrida
CC = g++
CPPFLAGS = -Wall -ansi -pedantic -std=c++11
OBJS = main.o Sapo.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
	rm -f $(OBJS)
main.o: Sapo.o
	$(CC) $(CPPFLAGS) -c main.cpp
Sapo.o:
	$(CC) $(CPPFLAGS) -c Sapo.cpp
clean:
	rm -f $(OBJS)
