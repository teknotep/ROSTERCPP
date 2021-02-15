#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"


class Student {
private
    string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numOfDays[3];
	DegreeProgram degree;

public:
    Student(string, string, string, string, int, int numDays[3], DegreeProgram);
        ~Student();

         //SETTERS
    void setStudentId(string);
    void setFirstName(string);
    void setLastName(string);
    void setEmailAddress(string);
    void setAge(int);
    void setNumOfDays(int*);
    void setDegree(DegreeProgram);

           //GETTERS
    string getStudentId()const;
    string getFirstName()const;
    string getLastName()const;
    string getEmailAddress()const;
    int getAge() const;
    const int *NumOfDays()const;


};
#endif // STUDENT_H
