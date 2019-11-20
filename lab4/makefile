Person: personMain.o person.o
	g++ -o Person personMain.o person.o

personMain.o: personMain.cpp person.h
	g++ -c personMain.cpp

person.o: person.cpp person.h
	g++ -c person.cpp

clean:
	rm *.o Person
