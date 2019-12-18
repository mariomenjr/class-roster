#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "Student.h"

class NetworkStudent : public Student
{
public:
	NetworkStudent(
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
	~NetworkStudent() {};

	Degree GetDegreeProgram();

};

#endif