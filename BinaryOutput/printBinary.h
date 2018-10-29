#ifndef PRINTBINARY_H
#define PRINTBINARY_H

int printAndDecrement(int x, int pow)
{
    int y = (x >= pow) ? 1 : 0;
    std::cout << y;
    return (x >= pow) ? x - pow : x;
}

#endif // PRINTBINARY_H
