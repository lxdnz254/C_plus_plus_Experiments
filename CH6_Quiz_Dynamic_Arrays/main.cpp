#include <iostream>
#include <string>
#include <utility>

void sortStringArray(std::string *stringArray, int arrayLength)
{
    int iter(arrayLength-1);

    do
    {
        bool swapped(false);
        for (int i=0; i < iter; ++i)
        {
            if (stringArray[i] > stringArray[i+1])
                {
                    std::swap(stringArray[i], stringArray[i+1]);
                    swapped = true;
                }
        }
        if (!swapped)
        {
            break;
        }
    } while (--iter > 0);
}

int main()
{
    std::cout << "Hello user!" << std::endl;
    std::cout << "How many names would you like to enter? ";
    int length;
    std::cin >> length;

    std::string *stringArray = new std::string[length];

    for(int i=0; i < length; ++i)
    {
        std::cout << "Enter name #" << i+1 << " :";
        std::string name;
        std::cin >> name;

        stringArray[i] = name;
    }

    // sort array
    sortStringArray(stringArray, length);

    std::cout << "Here is the list" << '\n';
    // ouput array
    for(int i=0; i < length; ++i)
    {
       std::cout <<  "Name #" << i+1 << " " << stringArray[i] << '\n';
    }

    delete[] stringArray;

    return 0;
}
