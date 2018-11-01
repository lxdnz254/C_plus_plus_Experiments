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
    string age;
    std::getline(std::cin, age); // read a full line of text into age

    cout << "Your name is " << name << ", your age is " << age << ", and you picked " << choice << endl;

    return 0;
}
