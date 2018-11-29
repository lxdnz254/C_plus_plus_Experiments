//
// Created by alex on 30/11/18.
//

#ifndef CHAPTER9FINALQUIZ4_FIXEDPOINT2_H
#define CHAPTER9FINALQUIZ4_FIXEDPOINT2_H

#include <iostream>
#include <cstdint>
#include <cmath>

class FixedPoint2 {

private:
    std::int16_t m_base; //non-fractional part
    std::int8_t m_decimal; //decimal part

public:
    explicit FixedPoint2(std::int16_t base=0, std::int8_t decimal=0);
    explicit FixedPoint2(double d_num);
    explicit operator double() const;
    FixedPoint2 operator-();

    friend bool operator==(const FixedPoint2 &fp1, const FixedPoint2 &fp2);

};


#endif //CHAPTER9FINALQUIZ4_FIXEDPOINT2_H
