#ifndef Person_h
#define Person_h

#include <string>

using namespace std;

class Person {

 public:

    Person();

    Person(string n, string d, string g);

    virtual void print();

 public:
    string dob;
    string gender;

 protected:
    string name;
};

#endif // Person_h
