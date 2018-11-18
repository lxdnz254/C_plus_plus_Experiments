#include <cassert>
#include <iostream>
#include "stack.h"

void Stack::reset()
{
    Stack::m_next = 0;
    for (int i = 0; i < Stack::s_maxStackLength; ++i)
        Stack::m_array[i] = 0;
}

bool Stack::push(int x)
{
    if (Stack::m_next == Stack::s_maxStackLength)
        return false;

    Stack::m_array[Stack::m_next++] = x;
    return true;
}

int Stack::pop()
{
    assert(Stack::m_next > 0 && "Can not pop empty stack");

    return m_array[--Stack::m_next];
}

void Stack::print()
{
    std::cout << "( ";
    for (int i= 0; i < Stack::m_next; ++i)
        std::cout << Stack::m_array[i] << ' ';
    std::cout << ")" << '\n';
}
