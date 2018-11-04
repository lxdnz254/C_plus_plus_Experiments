#include <iostream>
#include <utility>

int main()
{
    std::cout << "Hello user! This will bubble sort an array." << std::endl;

    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    int iter(length-1);

    do
    {
        bool swapped(false);
        for (int i=0; i < iter; ++i)
        {
            if (array[i] > array[i+1])
                {
                    std::swap(array[i], array[i+1]);
                    swapped = true;
                }
        }
        if (!swapped)
        {
            std::cout << "Early termination on iteration " << length-iter << '\n';
            break;
        }
    } while (--iter > 0);

    for (int i=0; i < length; ++i)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}
