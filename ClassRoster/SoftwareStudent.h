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
		int age
	) : Student(
		studentId, 
		firstName, 
		lastName, 
		emailAddress, 
		age
	) {};
	~SoftwareStudent() {};

	Degree GetDegreeProgram();

};

#endif