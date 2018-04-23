all:	calculator

calculator:	fcalc.o main.o
	gcc -o calculator fcalc.o main.o -lm

fcalc.o:	fcalc.c fonctions.h
	gcc -c fcalc.c

main.o:	main.c fonctions.h
	gcc -c main.c fonctions.h
clean:
	rm calculator *.o


