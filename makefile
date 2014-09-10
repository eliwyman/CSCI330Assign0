assign0: main.o
	g++ -Wall main.o -o assign0
main.o: main.cpp waiter.h waiter.o forker.h forker.o
	g++ -Wall -c main.cpp
forker.o: forker.cpp
	g++ -Wall -c forker.cpp
waiter.o: waiter.cpp
	g++ -Wall -c waiter.cpp

frontend:

backend: 

test1:
    ./assign0 blah foo
test2:
    ./assign0 tax1.txt
clean:
	rm -rf *o *~
