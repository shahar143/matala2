COMPILER = gcc
WARNINGS = -Wall -g

all: mains

mains: main.o my_mat.o
	$(COMPILER) $(WARNINGS) main.o my_mat.o -o mains

main.o: main.c my_mat.h
	$(COMPILER) $(WARNINGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(COMPILER) $(WARNINGS) -c my_mat.c

clean:
	rm -f *.o mains