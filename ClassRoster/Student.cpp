#include <vector>

#include "Student.h"

using namespace std;

const vector<string> DEGREE_NAMES{ "SECURITY", "NETWORK", "SOFTWARE" };

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

void Student::Print() {
	int degreeType = (int)this->degreeType;
	string degreeName = ((degreeType >= 0) ? DEGREE_NAMES[degreeType] : "");

	std::cout << "\t First Name: " + this->firstName;
	std::cout << "\t Last Name: " + this->lastName;
	std::cout << "\t Age: " + to_string(this->age);
	// std::cout << "\t First Name: " + this->firstName;	
	std::cout << "\t Degree Program: " + degreeName;
	std::cout << endl;
}