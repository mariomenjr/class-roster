#include <vector>

#include "Student.h"

using namespace std;

const vector<string> DEGREE_NAMES{ "SECURITY", "NETWORK", "SOFTWARE" };

// Accessors

string Student::GetStudentId() {
	return this->studentId;
}

string Student::GetFirstName() {
	return this->firstName;
}

string Student::GetLastName() {
	return this->lastName;
}

string Student::GetEmailAddress() {
	return this->emailAddress;
}

int Student::GetAge() {
	return this->age;
}

int* Student::GetNumberDaysToCompleteCourse() {
	return this->numberDaysToCompleteCourse;
}

Degree Student::GetDegreeProgram() {
	return this->degreeType;
}

// Mutators

void Student::SetStudentId(string studentId) {
	this->studentId = studentId;
}

void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::SetLastName(string lastName) {
	this->lastName = lastName;
}

void Student::SetEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::SetAge(int age) {
	this->age = age;
}

void Student::SetNumberDaysToCompleteCourse(int* numberDaysToCompleteCourse) {
	// this->numberDaysToCompleteCourse;
}

void Student::SetDegreeProgram(Degree degreeType) {
	 this->degreeType = degreeType;
}

// Actions

void Student::Print() {
	int degreeType = (int)this->GetDegreeProgram();
	string degreeName = ((degreeType >= 0) ? DEGREE_NAMES[degreeType] : "");

	std::cout << "\t First Name: " + this->GetFirstName();
	std::cout << "\t Last Name: " + this->GetLastName();
	std::cout << "\t Age: " + to_string(this->GetAge());
	
	std::cout << "\t Days In Courses: ";
	for (size_t i = 0; i < NUM_COURSES; i++)
		std::cout << " " << this->numberDaysToCompleteCourse[i] << " ";

	std::cout << "\t Degree Program: " + degreeName;
	std::cout << endl;
}