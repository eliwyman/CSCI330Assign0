assign0: main.o
	g++ -Wall main.o -o assign0
main.o: computeTax.o parser.o taxBracket.o fileHandler.o main.cpp
	g++ -Wall -c main.cpp -o main.o
fileHandler.o: fileHandler.cpp
	g++ -Wall -c fileHandler.cpp
computeTax.o: computeTax.cpp
	g++ -Wall -c computeTax.cpp
parser.o: parser.cpp
	g++ -Wall -c parser.cpp
taxBracket.o: taxBracket.cpp
	g++ -Wall -c taxBracket.cpp
test1:
	./assign0 blah foo
test2:
	./assign0 tax1.txt
clean:
	rm -rf *o *~
