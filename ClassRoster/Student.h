#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Degree.h"

using namespace std;

class Student
{
public:
	Student(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int numberDaysToCompleteCourse[]
	) :
		studentId(studentId), 
		firstName(firstName), 
		lastName(lastName), 
		emailAddress(emailAddress), 
		age(age),
		numberDaysToCompleteCourse(numberDaysToCompleteCourse)
	{}
	~Student() {};

	string GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int* GetNumberDaysToCompleteCourse();
	
	virtual Degree GetDegreeProgram();
	virtual void Print();
protected:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* numberDaysToCompleteCourse;
	Degree degreeType{ Degree::UNASSIGNED };
};

#endif