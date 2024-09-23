do: soal2 test2

soal2: soal2.o  
	g++ -o soal2 soal2.o 

test2: test.o
	g++ -o test2 test.o

soal2.o: soal2.cpp
	g++ -c soal2.cpp

test.o: test.cpp
	g++ -c test.cpp

run:
	./soal2

test:
	./test2

clean:
	rm -f soal2 soal2.o test2 test.o