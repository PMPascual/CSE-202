#include <iostream>
#include "Student.h"




Student::Student(): Person()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:000000000000088A begin
{
    major = "";
}
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:000000000000088A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

Student::Student(string n, string d, string g, string m): Person(n, d, g)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:000000000000088C begin
{
    major = m;
}
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:000000000000088C end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Student::print()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:0000000000000892 begin
{
    Person::print();
    cout << "    Student, Major: " << major << endl;
}
// section -117--74--108-95-474f0f0b:16197a0a05c:-8000:0000000000000892 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element
