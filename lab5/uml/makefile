uml: umlMain.o Instructor.o Student.o Person.o
	g++ -o uml umlMain.o Instructor.o Student.o Person.o

umlMain.o: umlMain.cpp Person.h Student.h Instructor.h
	g++ -c umlMain.cpp

Instructor.o: Instructor.cpp Person.h Student.h Instructor.h
	g++ -c Instructor.cpp

Student.o: Student.cpp Person.h Student.h
	g++ -c Student.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

clean:
	rm *.o uml
