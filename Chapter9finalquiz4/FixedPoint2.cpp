//
// Created by alex on 30/11/18.
//

#include <cassert>
#include "FixedPoint2.h"

// Main constructor
FixedPoint2::FixedPoint2(int16_t base, int8_t decimal)
        : m_base(base), m_decimal(decimal){
    // We should handle the case where decimal is > 99 or < -99 here
    // but will leave as an exercise for the reader
    assert((m_decimal <= 99 && m_decimal >= -99) && "Decimal figure is outside bounds");

    // If either the base or decimal or negative
    if (m_base < 0.0 || m_decimal < 0.0)
    {
        // Make sure base is negative
        if (m_base > 0.0)
            m_base = -m_base;
        // Make sure decimal is negative
        if (m_decimal > 0.0)
            m_decimal = -m_decimal;
    }
}

// Constructor with a double
FixedPoint2::FixedPoint2(double d_num) {
    m_base = static_cast<std::int16_t>(d_num);
    m_decimal = static_cast<std::int8_t>(round((d_num - m_base)*100));
}

// Convert doubles
FixedPoint2::operator double() const {
    return m_base + static_cast<double>(m_decimal)/100;
}

// Overriding the - unary operator
FixedPoint2 FixedPoint2::operator-() {
    return FixedPoint2(-m_base, -m_decimal);
}

// Evaluate if fixed points are equal
bool operator==(const FixedPoint2 &fp1, const FixedPoint2 &fp2) {
    return fp1.m_base == fp2.m_base && fp1.m_decimal == fp2.m_decimal;
}
