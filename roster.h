#pragma once
#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>

using namespace std;


class Roster {
private:
    static const int studentAmt = 5;
    Student* classRosterArray[studentAmt];
public:
	Roster();

	void add(string studentID, string firstName, string lastName, string email, int age , int numOfDays[],int arraySz,  DegreeProgram degree);
	void remove(string studentID);
	void printALL();
	void printAvgNumOfDays(string studentID);
	void printInvalidEmails();
	void printByDegree(int degree);
	int  getStudentAmt();

    ~Roster();

};


