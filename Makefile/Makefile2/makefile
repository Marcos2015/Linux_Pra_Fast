objects = test2.o test1.o

main2 : $(objects)
	gcc -o main2 $(objects)

test2.o: test2.c test2.h
	gcc -c test2.c

test1.o: test1.c test1.h
	gcc -c test1.c


clean:
	rm main2 $(objects)

