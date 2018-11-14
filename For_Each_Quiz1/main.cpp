#include <iostream>

using namespace std;

int main()
{
    // Program variables
    const string names[] = {"Alex", "Betty", "Caroline", "David", "Emily", "Fred", "Greg", "Holly"};
    bool found = false;

    // User input
    cout << "Hello user! Enter a name: " << endl;
    string name;
    cin >> name;

    // Evaluate input
    for (const auto &findName: names)
        if (findName == name)
        {
            found = true;
            break;
        }

    // Output result
    cout << name << (found ? " was found." : " was not found.") << '\n';
    return 0;
}
