CC = g++
CXXFLAGS += -std=c++17 -Wall -Werror

all:main

main: ./src/main.o
	${CC} ${CXXFLAGS} ./src/main.o -o main

main.o: ./src/main.cpp
	${CC} ${CXXFLAGS} -c main.cpp
clean:
	rm *.o main
