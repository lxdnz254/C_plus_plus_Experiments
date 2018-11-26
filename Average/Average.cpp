//
// Created by alex on 26/11/18.
//

#include "Average.h"

std::ostream& operator<<(std::ostream &out, const Average &ave) {
    out << static_cast<double>(ave.m_sum)/ave.m_count;
    return out;
}
Average& Average::operator+=(int num) {
    // add to sum
    m_sum += num;
    // increase the count
    ++m_count;

    // return *this if someone wants to chain operator
    return *this;
}