#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

class person{
    
    
    
void person:: class display(){

cout<<"name:"<<name<<endl;
cout<<"id:"<<id<<endl;




}






// ==================== Student Class Implementation ====================

void student::class display(){


person.display();
cout<<"year:"<<yearLevel<<endl;
cout<<"major:"<<major<<endl;


}




// ==================== Instructor Class Implementation ====================


void instructor::class display(){
person.display();
student.display();
cout<<"department:"<<department<<endl;
cout<<"experience:"<<experienceYears<<endl;




}



// ==================== Course Class Implementation ====================
class course:class student{
    
    
    
 void course::class displayCourseInfo(){
student.display();
 
 cout<<"courseCode:"<<courseCode<<endl;
cout<<"courseName:"<<courseName<<endl;
  cout<<" maxStudents:"<< maxStudents<<endl;
cout<<"currentStudents:"<<currentStudents<<endl;
 
 }







// ==================== Main Function ====================
int main() {
   cout<<"course:CS101"<<endl;
    student s1=new student();
    
    instructor i1= new instructor();
    
    course c1=new course();
    
    
cin>>name;
cin>>id;
cin>>yearLevel;
cin>> major;
cin>>department;
cin>>experienceYears;
cin>>courseCode;
cin>>courseName;
cin>>maxStudents;
cin>>currentStudents;
   
    
    return 0;
}
