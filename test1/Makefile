test1:test1.o
	g++ -o test1 test1.o
test1.o:test1.c
	g++ -o test1.o -c test1.c

.PHONY:clean
clean:
	-rm test1 *.o
