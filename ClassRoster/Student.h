#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Degree.h"

using namespace std;

const int NUM_COURSES = 3;

class Student
{
public:
	Student(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* numberDaysToCompleteCourse
	) :
		studentId(studentId), 
		firstName(firstName), 
		lastName(lastName), 
		emailAddress(emailAddress), 
		age(age)
	{
		for (size_t i = 0; i < NUM_COURSES; i++)
			this->numberDaysToCompleteCourse[i] = numberDaysToCompleteCourse[i];
	}
	~Student() {
		delete this->numberDaysToCompleteCourse;
	};

	string GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int* GetNumberDaysToCompleteCourse();
	
	void SetStudentId(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetAge(int age);
	void SetNumberDaysToCompleteCourse(int* numberDaysToCompleteCourse);
	void SetDegreeProgram(Degree degreeType);

	virtual Degree GetDegreeProgram();
	virtual void Print();
protected:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numberDaysToCompleteCourse[NUM_COURSES];
	Degree degreeType{ Degree::UNASSIGNED };
};

#endif