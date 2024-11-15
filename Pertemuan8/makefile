do: Source test2

Source: Source.o  
	g++ -o Source Source.o 

test2: test.o
	g++ -o test2 test.o

Source.o: Source.cpp
	g++ -c Source.cpp

test.o: test.cpp
	g++ -c test.cpp

run: 
	./Source

test:
	./test2

clean:
	rm -f Source Source.o test2 test.o