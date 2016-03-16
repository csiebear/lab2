BMICal:lab2.o main.o
	g++ -o BMICal main.o lab2.o
lab2.o: lab2.h lab2.cpp
	g++ -c lab2.cpp
main.o: main.cpp lab2.h
	g++ -c main.cpp
clean:
	rm lab2.o
	rm main.o
