#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "Student.h"

class SecurityStudent : public Student
{
public:
	SecurityStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* numberDaysToCompleteCourse
	) : Student(
		studentId,
		firstName,
		lastName,
		emailAddress,
		age,
		numberDaysToCompleteCourse
	) {
		this->degreeType = Degree::SECURITY;
	};
	~SecurityStudent() {};

	Degree GetDegreeProgram();

};

#endif