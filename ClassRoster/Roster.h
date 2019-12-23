#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <vector>

#include "Student.h"

class Roster
{
public:
	Roster() {};
	~Roster() {};

	void Add(string studentId, string firstName, string lastName, string emailAddress, int age, /*int daysInCourse1, int daysInCourse2, int daysInCourse3,*/ Degree degreeType);
	void Remove(string studentID);

	void PrintAll();
	void PrintDaysInCourse(string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(int degreeProgram);
private:
	vector<Student*> classRosterArray;

	bool IsEmailAddressValid(string emailAddress);
	void PrintStudent(Student* student, int rowNumber);
};

#endif