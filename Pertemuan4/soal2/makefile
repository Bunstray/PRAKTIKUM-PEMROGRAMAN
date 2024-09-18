do: multiplication test2

multiplication: multiplication.o  
	g++ -o multiplication multiplication.o 

test2: test.o
	g++ -o test2 test.o

multiplication.o: multiplication.cpp
	g++ -c multiplication.cpp

test.o: test.cpp
	g++ -c test.cpp

run: 
	./multiplication

test:
	./test2

clean:
	rm -f multiplication multiplication.o test2 test.o