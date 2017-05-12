CXX=g++
CFLAGS=-Wall `pkg-config --cflags opencv` -std=c++11 -c
LDFLAGS=-Wall `pkg-config --libs opencv` -std=c++11 -lpigpio -lrt -lpthread -lraspicam_cv -lraspicam -I/usr/local/include -L/usr/local/lib -lwiringPi

all: project

project: main.o camera.o
	$(CXX) $(LDFLAGS) main.o camera.o -o project

main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp

camera.o: camera.cpp
	$(CXX) $(CFLAGS) camera.cpp
	
	
clean:
	rm *o project




	
	



