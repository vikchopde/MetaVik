#ifndef METAVIK_INTEGRAL_CONSTANT_H
#define METAVIK_INTEGRAL_CONSTANT_H

namespace metavik
{
    template <typename T, T val>
    struct integral_constant
    {
        static constexpr T value = val;
        typedef integral_constant<T, val> type;
        typedef T value_type;

        constexpr operator value_type() const noexcept { return value; }
        constexpr value_type operator ()() const noexcept { return value; }
    };
}


#endif //METAVIK_INTEGRAL_CONSTANT_H
