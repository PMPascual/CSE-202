staff: Main.o Employee.o Staff.o
	g++ -o staff Main.o Employee.o Staff.o

Main.o: Main.cpp Employee.h Staff.h
	g++ -c Main.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

Staff.o: Staff.cpp Staff.h Employee.h
	g++ -c Staff.cpp

clean:
	rm *.o staff
