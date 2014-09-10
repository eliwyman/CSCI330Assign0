assign0: main.o
	g++ -Wall main.o -o assign0
main.o: main.cpp  computeTax.o fileHandler.o parser.o taxBracket.o
	g++ -Wall -c main.cpp
computeTax.o: computeTax.cpp
	g++ -Wall -c computeTax.cpp
fileHandler.o: fileHandler.cpp
	g++ -Wall -c fileHandler.cpp
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
