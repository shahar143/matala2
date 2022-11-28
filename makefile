COMPILER = gcc
WARNINGS = -Wall -g

all: mains

mains: main.o my_mat.a
	$(COMPILER) $(WARNINGS) main.o my_mat.a -o mains

my_mat.a: my_mat.o
	ar -rcs my_mat.a my_mat.o

main.o: main.c my_mat.h
	$(COMPILER) $(WARNINGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(COMPILER) $(WARNINGS) -c my_mat.c

clean:
	rm -f *.o *.a mains