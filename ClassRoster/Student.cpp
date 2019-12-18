#include "Student.h"

#include <string>
using namespace std;

Student::Student(
	string studentId, 
	string firstName, 
	string lastName, 
	string emailAddress, 
	int age, 
	int* numberDaysToCompleteCourse
)
{
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	// this->numberDaysToCompleteCourse = &numberDaysToCompleteCourse;
}

Student::~Student()
{
}

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

void Student::Print()
{
}

void Student::GetDegreeProgram()
{
}
