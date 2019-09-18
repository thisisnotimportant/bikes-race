build/bike: build build/main.o build/Bike.o build/Road.o build/Race.o
	g++ -o build/bike build/main.o build/Bike.o build/Road.o build/Race.o

build: 
	mkdir -p build

build/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/main.o

build/Bike.o: src/Bike.cpp src/Bike.h
	g++ -c src/Bike.cpp -o build/Bike.o

build/Road.o: src/Road.cpp src/Road.h
	g++ -c src/Road.cpp -o build/Road.o

build/Race.o: src/Race.cpp src/Race.h
	g++ -c src/Race.cpp -o build/Race.o

all: build/bike

clean:
	rm -f build/main.o build/Bike.o build/Road.o build/Race.o build/bike

run:
	./build/bike