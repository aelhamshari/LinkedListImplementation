Demo: main.o LinkedListTester.o Interaction.o
	g++ -g -std=c++11 -Wall main.o LinkedListTester.o Interaction.o -o Demo

main.o: main.cpp LinkedListTester.h Interaction.h
	g++ -g -std=c++11 -Wall -c main.cpp

LinkedListTester.o: LinkedListTester.h LinkedListTester.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp
		g++ -std=c++11 -g -Wall -c LinkedListTester.cpp

Interaction.o: Interaction.h Interaction.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp
		g++ -std=c++11 -g -Wall -c Interaction.cpp

clean:
	rm *.o Demo
