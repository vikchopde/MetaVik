#include <iostream>
#include "integral_constant.h"

int main()
{
    typedef std::integral_constant<int, 3> two_t;
    typedef std::integral_constant<int, 4> four_t;
    static_assert(two_t::value * 2 == four_t::value, "something broke");
    return 0;
}