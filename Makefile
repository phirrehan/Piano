output: main.o
	g++ main.o -o main -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-window

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main

