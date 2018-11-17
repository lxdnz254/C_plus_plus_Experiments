#include <iostream>

using namespace std;

class IntPair
{
    public:
        int i_x;
        int i_y;

        void set(int x, int y)
        {
            i_x = x;
            i_y = y;
        }

        void print()
        {
            cout << "Pair(" << i_x << ", " << i_y <<")" << '\n';
        }
};

int main()
{
    cout << "Hello world!" << endl;

    IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

    return 0;
}
