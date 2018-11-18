#include <iostream>
#include <cassert>

class Stack
{
    public:
        void reset()
        {
            m_next = 0;
            for (int i = 0; i < s_maxStackLength; ++i)
                m_array[i] = 0;
        }

        bool push(int x)
        {
            if (m_next == s_maxStackLength)
                return false;

            m_array[m_next++] = x;
            return true;
        }
        int pop()
        {
            assert(m_next > 0 && "Can not pop empty stack");

            return m_array[--m_next];
        }
        void print()
        {
            std::cout << "( ";
            for (int i= 0; i < m_next; ++i)
                std::cout << m_array[i] << ' ';
            std::cout << ")" << '\n';
        }
    protected:

    private:
        static const int s_maxStackLength { 10 };
        int m_array[s_maxStackLength];
        int m_next;
};

int main()
{
    std::cout << "Hello world!" << std::endl;
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}
