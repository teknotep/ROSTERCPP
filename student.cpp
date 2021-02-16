#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//Student.cpp CONSTRUCTOR
Student::Student(string stdID, string fstName, string lstName, string eml, int age, int days[3], DegreeProgram dgre){
    setStudentId(stdID);
    setFirstName(fstName);
    setLastName(lstName);
    setEmailAddress(eml);
    setAge(age);
    setNumOfDays(days);
    setDegree(dgre);
};

//DESTRUCT//
Student::~Student() {
    return;
    };

    //MUTATORS - SETTERS//
void Student::setStudentId(string stdID) {
            studentID = stdID;
    };
void Student::setFirstName(string fstName) {
            firstName = fstName;
    };
void Student::setLastName(string lstName) {
            lastName = lstName;
    };
void Student::setEmailAddress(string eml) {
            emailAddress = eml;
    };
void Student::setAge(int age) {
            age = age;
    };
void Student::setNumOfDays(int* days) {
            numOfDays = days;
    };
void Student::setDegree(DegreeProgram dgre) {
            degree = dgre;
    } ;


//ACCESSORS - GETTERS//
string Student::getStudentId() const {
    return studentId;
};
string Student::getFirstName() const {
    return firstName;
};
string Student::getLastName() const {
    return lastName;
};
string Student::getEmailAddress() const {
    return emailAddress;
};
int Student::getAge() const {
    return age;
};
int * Student::getNumOfDays() const {
    return numOfDays;
};
DegreeProgram Student::getDegree()  {
    return degree;
};
