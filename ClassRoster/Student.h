#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:
	Student(string studentId, string firstName, string lastName, string emailAddress, int age, int* numberDaysToCompleteCourse);
	~Student();

	string GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int* GetNumberDaysToCompleteCourse();

	virtual void Print();
	virtual void GetDegreeProgram();

private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numberDaysToCompleteCourse[3];
};

#endif