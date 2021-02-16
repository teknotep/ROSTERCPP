#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//No empty constructor(s)//
// CONSTRUCTOR //
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numOfDays[], int arraySz, DegreeProgram degree){
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++) {
		this->numOfDays[i] = numOfDays[i];
	}
    this->degree = degree;
};

//DESTRUCT//
Student::~Student() {
    return;
    };

    //MUTATORS - SETTERS//
void Student::setStudentID(string studentID) {
            studentID = studentID;
    };
void Student::setFirstName(string firstName) {
            firstName = firstName;
    };
void Student::setLastName(string lastName) {
            lastName = lastName;
    };
void Student::setEmailAddress(string emailAddress) {
            emailAddress = emailAddress;
    };
void Student::setAge(int age) {
            age = age;
    };
void Student::setNumOfDays( int numOfDays[], int arraySz ) {
	for (int i = 0; i < arraySz; ++i) {
		this->numOfDays[i] = numOfDays[i];
	}
	 };


//ACCESSORS - GETTERS//
string Student::getStudentID()  {
    return studentID;
};
string Student::getFirstName()  {
    return firstName;
};
string Student::getLastName()  {
    return lastName;
};
string Student::getEmailAddress()  {
    return emailAddress;
};
int Student::getAge()  {
    return age;
};
int *Student::getNumOfDays() {
    return numOfDays;
};
