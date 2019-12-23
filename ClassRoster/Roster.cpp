#include "Roster.h"

#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"

void Roster::Add(string studentId, string firstName, string lastName, string emailAddress, int age, /*int daysInCourse1, int daysInCourse2, int daysInCourse3,*/ Degree degreeType) {
    if (degreeType == Degree::NETWORK) {
        classRosterArray.push_back(new NetworkStudent(studentId, firstName, lastName, emailAddress, age));
    }
    else if (degreeType == Degree::SECURITY) {
        classRosterArray.push_back(new SecurityStudent(studentId, firstName, lastName, emailAddress, age));
    }
    else if (degreeType == Degree::SOFTWARE) {
        classRosterArray.push_back(new SoftwareStudent(studentId, firstName, lastName, emailAddress, age));
    }
}

void Roster::Remove(string studentId) {
    int SIZE = classRosterArray.size();
    bool wasRemoved = false;
    for (int i = 0; i < SIZE; i++) {
        Student* student = classRosterArray.at(i);
        if (student != nullptr) {
            if (student->GetStudentId() == studentId) {
                classRosterArray.at(i) = nullptr;
                wasRemoved = true;
                break;
            }
        }
    }
    if (!wasRemoved) std::cout << endl << "\t Student `" + studentId + "` not found." << endl;
}

void Roster::PrintAll() {
    std::cout << endl << "## All student ##" << endl;
    int SIZE = classRosterArray.size();
    for (int i = 0; i < SIZE; i++) {
        Student* student = classRosterArray.at(i);
        if (student != nullptr) {
            this->PrintStudent(classRosterArray.at(i), i);
        }
    }
}

void Roster::PrintDaysInCourse(string studentID) {}

void Roster::PrintInvalidEmails() {
    std::cout << endl << "## Student with invalid emails ##" << endl;
    int SIZE = classRosterArray.size();
    for (int i = 0; i < SIZE; i++) {
        Student* student = classRosterArray.at(i);
        if (student != nullptr) {
            if (!this->IsEmailAddressValid(student->GetEmailAddress())) {
                this->PrintStudent(classRosterArray.at(i), i);
            }
        }
    }
}

void Roster::PrintByDegreeProgram(int degreeProgram) {
    std::cout << endl << "## Student By Specified Degree Program ##" << endl;
    int SIZE = classRosterArray.size();
    for (int i = 0; i < SIZE; i++) {
        Student* student = classRosterArray.at(i);
        if (student != nullptr) {
            int studentDegree = (int)student->GetDegreeProgram();
            if (studentDegree == degreeProgram ) {
                this->PrintStudent(classRosterArray.at(i), i);
            }
        }
    }
}

// Privates

bool Roster::IsEmailAddressValid(string emailAddress) {
    bool hasAt = emailAddress.find('@') != string::npos;
    bool hasPeriod = emailAddress.find('.') != string::npos;
    bool hasSpace = emailAddress.find(' ') != string::npos;

    return hasAt && hasPeriod && !hasSpace;
}

void Roster::PrintStudent(Student* student, int rowNumber) {
    std::cout << to_string(rowNumber + 1) << "\t ";
    student->Print();
}