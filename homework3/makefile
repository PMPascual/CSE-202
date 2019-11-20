Student: studentMain.o student.o
	g++ -o Student studentMain.o student.o

studentMain.o: studentMain.cpp student.h
	g++ -c studentMain.cpp

student.o: student.cpp student.h
	g++ -c student.cpp

clean:
	rm *.o Student
