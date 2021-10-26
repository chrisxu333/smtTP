smartTP: MutexQueue.o main.o
	g++ -o smartTP main.o MutexQueue.o -lpthread
main.o: main.cpp MutexQueue.h SmartTP.h
	g++ -o main.o -c main.cpp -lpthread
MutexQueue.o: MutexQueue.cpp MutexQueue.h
	g++ -o MutexQueue.o -c MutexQueue.cpp
clean:
	rm -rf *.o smartTP

