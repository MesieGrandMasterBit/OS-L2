PATH_SRC = src/
PATH_BUILD_SRC = build/

all: build build/src pr

pr: $(PATH_BUILD_SRC)main.o $(PATH_BUILD_SRC)Lab2.o $(PATH_BUILD_SRC)Lab2-1.o
	g++ $(PATH_BUILD_SRC)main.o $(PATH_BUILD_SRC)Lab2.o $(PATH_BUILD_SRC)Lab2-1.o -o pr

$(PATH_BUILD_SRC)main.o: $(PATH_SRC)main.cpp
	g++ -Wall -c $(PATH_SRC)main.cpp -o $(PATH_BUILD_SRC)main.o

$(PATH_BUILD_SRC)Lab2.o: $(PATH_SRC)Lab2.cpp
	g++ -Wall -c $(PATH_SRC)Lab2.cpp -o $(PATH_BUILD_SRC)Lab2.o

$(PATH_BUILD_SRC)Lab2-1.o: $(PATH_SRC)Lab2-1.cpp
	g++ -Wall -c $(PATH_SRC)Lab2-1.cpp -o $(PATH_BUILD_SRC)Lab2-1.o

build:
	mkdir build

build/src:
	mkdir build/src

clean:
	rm -rf build/*.o

.PHONY: clean
