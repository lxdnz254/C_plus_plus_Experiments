#ifndef STACK_H
#define STACK_H

namespace project
{
    class Stack
    {
        public:
            void reset();
            bool push(int x);
            int pop();
            void print();
        protected:

        private:
            static const int s_maxStackLength { 10 };
            int m_array[s_maxStackLength];
            int m_next;
    };
}

#endif // STACK_H
