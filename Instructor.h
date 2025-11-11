#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class instructor:class person{
private:
string department;
int experienceYears;

public: 
    instructor();
    instructor(string n,int i, string d ,int e);
    destructor();
    display();

};










#endif
