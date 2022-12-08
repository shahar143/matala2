COMPILER = gcc
WARNINGS = -Wall -g

all: connections

connections: main.o my_mat.so
	$(COMPILER) $(WARNINGS) main.o my_mat.o my_mat.so -o connections ./my_mat.so

my_mat.so: my_mat.o
	$(COMPILER) -Wall -fPIC -shared -o my_mat.so my_mat.o

main.o: main.c
	$(COMPILER) $(WARNINGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(COMPILER) $(WARNINGS) -c my_mat.c

clean:
	rm -f *.o mains my_mat.so