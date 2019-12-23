#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "Student.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int numberDaysToCompleteCourse[]
	) : Student(
		studentId, 
		firstName, 
		lastName, 
		emailAddress, 
		age,
		numberDaysToCompleteCourse
	) {
		this->degreeType = Degree::SOFTWARE;
	};
	~SoftwareStudent() {};

	Degree GetDegreeProgram();

};

#endif