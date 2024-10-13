do: soal1 test1

soal1: soal1.o  
	g++ -o soal1 soal1.o

test1: test.o
	g++ -o test1 test.o

soal1.o: soal1.cpp
	g++ -c soal1.cpp

test.o: test.cpp
	g++ -c test.cpp

run:
	./soal1

test:
	./test1

clean:
	rm -f soal1 soal1.o test1 test.o