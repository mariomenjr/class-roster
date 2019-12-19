// ClassRoster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
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

    Student *classRosterArray[SIZE_ARRAY];

    for (int i = 0; i < SIZE_ARRAY; i++)
    {
        vector<string> fields(SIZE_VECTOR);

        string rowData = studentData[i];
        int vectorPos = 0;

        int startingPos = 0;
        int separatorPos = rowData.find(",");
        
        do {
            fields.at(vectorPos) = rowData.substr(startingPos, separatorPos);

            rowData = rowData.substr(++separatorPos);

            separatorPos = rowData.find(",");
            vectorPos++;

        } while (separatorPos != string::npos);

        /*while (rowData.substr(0 != nullptr) {
            fields.push_back(strrchr(rowData, ','));

        }*/

        /*const char* studentId = strrchr(rowData, ',');
        string pos = studentId;

        const char* firstName = strrchr(rowData, ',');
        string pos2 = firstName;*/
        // string str(studentId);

        /*while (strchr(current, ',') != nullptr) {
            
            fields.push_back()
        }*/

        const int o = 0;
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
