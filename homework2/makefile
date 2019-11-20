Student: main.o course.o student.o
	g++ -o Student main.o course.o student.o

main.o: main.cpp student.h course.h
	g++ -c main.cpp

course.o: course.cpp student.h course.h 
	g++ -c course.cpp

student.o: student.cpp student.h
	g++ -c student.cpp

clean:
	rm *.o Student
