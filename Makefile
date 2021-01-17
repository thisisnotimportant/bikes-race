build/bike: build
	g++ -o build/bike src/main.cpp src/Bike.cpp src/Race.cpp src/Road.cpp

build: 
	mkdir -p build

all: build/bike

clean:
	rm -f build/bike

run:
	./build/bike
