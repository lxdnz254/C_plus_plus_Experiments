#ifndef STUDENTARRAYS_H
#define STUDENTARRAYS_H

#include "student.h"

using namespace std;

void sortArray(Student *arr, int length)
{
    int iter(length-1);

    do
    {
        bool swapped(false);
        for (int i=0; i < iter; ++i)
        {
            if (arr[i].grade < arr[i+1].grade)
                {
                    swap(arr[i], arr[i+1]);
                    swapped = true;
                }
        }
        if (!swapped)
            break;
    } while (--iter > 0);
}

void printArray(Student *arr, int length)
{
    for (int i = 0;i < length;++i)
        cout << arr[i].firstName << " got a grade of " << arr[i].grade << '\n';
}

#endif // STUDENTARRAYS_H
