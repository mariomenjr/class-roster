// ClassRoster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "Degree.h"
#include "Student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "Roster.h"

using namespace std;

void PrintMyInformation() {
    std::cout << "Scripting and Programming - Applications -- C867" << endl;
    
    std::cout << "Language:\t C++" << endl;
    std::cout << "Student Id:\t 001097072" << endl;
    std::cout << "Student:\t Mario Menjivar Sermeno" << endl;
}

int main()
{
    PrintMyInformation();

    const int SIZE_ARRAY = 5;
    const int SIZE_VECTOR = 9;

    const vector<string> DEGREE_NAMES { "SECURITY", "NETWORK", "SOFTWARE" };

    const string studentData[SIZE_ARRAY] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY"      ,
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"   ,
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"   ,
        "A5,Mario,Menjivar,mmenjiv@wgu.edu,26,10,10,10,SOFTWARE"       // My own data as last item in Array
    };

    Roster* rosterInstance = new Roster;
    Roster myRoster = (*rosterInstance);

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

        Degree studentDegree = Degree::UNASSIGNED;

        for (int i = 0; i < (int)DEGREE_NAMES.size(); i++)
        {
            string degree = DEGREE_NAMES[i];
            if (fields[8] == degree) {
                studentDegree = (Degree)i;
                break;
            }
        }

        myRoster.Add(fields[0], fields[1], fields[2], fields[3], stoi(fields[4]), studentDegree);
    }

    // myRoster->Remove("A3");
    myRoster.PrintAll();
    myRoster.PrintInvalidEmails();
    myRoster.PrintByDegreeProgram((int)Degree::SOFTWARE);
    
    myRoster.Remove("A3");
    myRoster.Remove("A3");
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
