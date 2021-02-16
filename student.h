#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
private:
    string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numOfDays[3];
	DegreeProgram degree;

public:

    //Student Constructor
    Student(string , string , string , string , int , int numOfDays[], int arraySz, DegreeProgram degree);
            ~Student();

    //  MUTATORS - SETTERS  //
    void setStudentID(string);
    void setFirstName(string);
    void setLastName(string);
    void setEmailAddress(string);
    void setAge(int);
    void setNumOfDays(int numOfDays[], int arraySz);


    //  ACCESSORS - GETTERS  //
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge() ;
    int *getNumOfDays();

    //PRINTING
	void print() {
		return;
	};
	DegreeProgram getDegree() {
		return degree;
	};

};
