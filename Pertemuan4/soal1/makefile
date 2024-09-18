do: sum test1

sum: sum.o  
	g++ -o sum sum.o 

test1: test.o
	g++ -o test1 test.o

sum.o: sum.cpp
	g++ -c sum.cpp

test.o: test.cpp
	g++ -c test.cpp

run:
	./sum

test:
	./test1

clean:
	rm -f sum sum.o test1 test.o