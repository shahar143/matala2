COMPILER = gcc
WARNINGS = -Wall -g
.PHONYY: all clean

all: connections libmy_mat.a

connections: main.o libmy_mat.a my_mat.o
	$(COMPILER) $(WARNINGS) main.o my_mat.o libmy_mat.a -o connections

libmy_mat.a: my_mat.o
	ar -rcs libmy_mat.a my_mat.o

main.o: main.c
	$(COMPILER) $(WARNINGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(COMPILER) $(WARNINGS) -c my_mat.c

clean:
	rm -f *.o connections libmy_mat.a