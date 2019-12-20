// ClassRoster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include <vector>
using namespace std;

int main()
{
    const int SIZE_ARRAY = 5;
    const int SIZE_VECTOR = 9;


    const string studentData[SIZE_ARRAY] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY"      ,
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"   ,
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"   ,
        "A5,Mario,Menjivar,mmenjiv@wgu.edu,26,10,10,10,SOFTWARE"       // My own data as last item in Array
    };

    vector<Student*> classRosterArray;

    for (int i = 0; i < SIZE_ARRAY; i++)
    {
        vector<string> fields(SIZE_VECTOR);

        string rowData = studentData[i];
        int vectorPos = 0;

        int startingPos = 0;
        int separatorPos = 0;
        
        do {
            separatorPos = rowData.find(",");

            // Grabbing the first item from the rowData (up to the appearance of a comma)
            if (separatorPos < 0)
                fields.at(vectorPos) = rowData;
            else
                fields.at(vectorPos) = rowData.substr(startingPos, separatorPos);

            // Replace rowData value by "the rest" of the string
            rowData = rowData.substr(separatorPos + 1);

            // Find new separator
            vectorPos++;

        } while (separatorPos != string::npos);

        string degreeType = fields[8];
        
        if (degreeType == "NETWORKING") {
            classRosterArray.push_back(new NetworkStudent(fields[0], fields[1], fields[2], fields[3], stoi(fields[4])));
        }
        else if (degreeType == "SECURITY") {
            classRosterArray.push_back(new SecurityStudent(fields[0], fields[1], fields[2], fields[3], stoi(fields[4])));
        }
        else if (degreeType == "SOFTWARE") {
            classRosterArray.push_back(new SoftwareStudent(fields[0], fields[1], fields[2], fields[3], stoi(fields[4])));
        }
    }

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
