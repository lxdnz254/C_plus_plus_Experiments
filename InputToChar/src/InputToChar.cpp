//============================================================================
// Name        : InputToChar.cpp
// Author      : Alex McBride
// Version     :
// Copyright   : 2018
// Description : Getting Input in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

int main() 
{
	cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
 
    char ch;
    cin >> ch; // ch = 'a', "bcd" is left queued.
    cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;
 
    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    cin >> ch; // ch = 'b', "cd" is left queued.
    cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;
    
    return 0;
}