#include <iostream>

using namespace std;

double getDouble()
{
    cout << "Enter a double value: ";
    double num;
    cin >> num;
    return num;
}

char getOperator()
{
    cout << "Enter one of the following +, -, *, /: ";
    char op;
    cin >> op;
    return op;
}

void printResult(double x, char op, double y)
{
    if (op == 42)
        cout << x << " * "<< y << " is " << x * y << endl;
    else if (op == 43)
        cout << x << " + " << y << " is " << x + y << endl;
    else if (op == 45)
        cout << x << " - " << y << " is " << x - y << endl;
    else if (op == 47)
        cout << x << " / " << y << " is " << x / y << endl;
}

int main()
{
    cout << "Hello user!" << endl;
    double x = getDouble();
    double y = getDouble();
    char op = getOperator();

    printResult(x, op, y);
    return 0;
}
