//
// Created by alex on 26/11/18.
//

#ifndef AVERAGE_AVERAGE_H
#define AVERAGE_AVERAGE_H


#include <stdint-gcc.h>
#include <iostream>

class Average {

private:
    int32_t m_sum;
    int8_t m_count;

public:
    Average(){
        m_sum = 0;
        m_count = 0;
    }

    friend std::ostream& operator<< (std::ostream &out, const Average &ave);
    Average& operator+=(int num);

};


#endif //AVERAGE_AVERAGE_H
