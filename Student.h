#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class student:class person{

private:
    int yearLevel;
    string major;
    
public:
    student();
    student(string n,int i, int y ,string m);
     destructor();
    display();



};











#endif
