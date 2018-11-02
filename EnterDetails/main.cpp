#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;

    cout << "Pick 1 or 2: ";
    int choice {0};
    cin >> choice;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore unlimited characters until a \n is removed

    cout << "Now enter your full name: ";
    string name;
    std::getline(std::cin, name); // read a full line of text into name

    cout << "Enter your age: ";
    int age {0};
    cin >> age;

    int letters = name.length();
    double agePerLetter = static_cast<double>(age)/letters;

    cout << "Your name is " << name << ", your age is " << age << ", and you picked " << choice << endl;
    cout << "You have lived for " << agePerLetter << " years per letter in your name" << endl;

    return 0;
}
