CC = g++
CXXFLAGS += -std=c++17 -Wall -Werror

all:main

main: ./src/main.o ./src/base_models/fishing_spot.o ./src/base_models/fisherman.o ./src/base_models/fish.o 
	${CC} ${CXXFLAGS} ./src/base_models/fishing_spot.o ./src/base_models/fisherman.o ./src/base_models/fish.o ./src/main.o -o main

fish.o: ./src/base_models/fishing_spot.cpp ./src/base_models/fishing_spot.hpp
	${CC} ${CXXFLAGS} -c fishing_spot.cpp 

fish.o: ./src/base_models/fisherman.cpp ./src/base_models/fisherman.hpp
	${CC} ${CXXFLAGS} -c fish.cpp 

fish.o: ./src/base_models/fish.cpp ./src/base_models/fish.hpp
	${CC} ${CXXFLAGS} -c fish.cpp 

main.o: ./src/main.cpp
	${CC} ${CXXFLAGS} -c main.cpp
clean:
	rm *.o main
