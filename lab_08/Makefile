CXXFLAGS=-std=c++14

main: main.o unindent.o
	g++ -o main main.o unindent.o

main.o: main.cpp unindent.h
	g++ $(CXXFLAGS) -c main.cpp

funcs.o: unindent.cpp unindent.h
	g++ $(CXXFLAGS) -c unindent.cpp
clean:
	rm -f main.o unindent.o main