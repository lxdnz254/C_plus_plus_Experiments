#include <iostream>
#include "studentArrays.h"

using namespace std;

int main()
{
    cout << "Hello user! How many students to enter? ";
    int number;
    cin >> number;

    Student *students = new Student[number];


    for (int i=0; i < number; ++i)
    {
        cout << '\n' << "Enter name: ";
        string newName;
        cin >> newName;
        cout << '\n' << "Enter grade (0-100): ";
        int newGrade;
        cin >> newGrade;
        students[i].firstName = newName;
        students[i].grade = newGrade;
    }

    sortArray(students, number);
    printArray(students, number);

    delete[] students;

    return 0;
}
