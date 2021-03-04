CC = gcc 
CFLAGS = -Wall -O2


main: main.o lecture.o ecriture.o creer.o
	$(CC) $(CFLAGS) -o  lecture main.o lecture.o ecriture.o creer.o
lecture.o: lecture.c lecture.h
	$(CC) $(CFLAGS) -o lecture.o -c lecture.c 
ecriture.o: ecriture.c ecriture.h
	$(CC) $(CFLAGS) -o ecriture.o -c ecriture.c 
creer.o: creer.c creer.h
	$(CC) $(CFLAGS) -o creer.o -c creer.c 
main.o: main.c 
	$(CC) $(CFLAGS) -o main.o -c main.c 


clean:
	rm -f *.o main