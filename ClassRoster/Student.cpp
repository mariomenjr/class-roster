#include "Student.h"

#include <string>
using namespace std;

string Student::GetStudentId() 
{
	return this->studentId;
}

string Student::GetFirstName() 
{
	return this->firstName;
}

string Student::GetLastName() 
{
	return this->lastName;
}

string Student::GetEmailAddress() 
{
	return this->emailAddress;
}

int Student::GetAge() 
{
	return this->age;
}

int* Student::GetNumberDaysToCompleteCourse() 
{
	return nullptr;
}

Degree Student::GetDegreeProgram()
{
	return Degree();
}

