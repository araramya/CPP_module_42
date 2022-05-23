#ifndef WHENEVER_HPP
#define WHENEVER_CPP

#include <iostream>

template <typename T>
void swap(T& t_var1, T& t_var2)
{
    T temp = t_var1;
    t_var1 = t_var2;
    t_var2 = temp;
}

template <typename T>
T const& min(T const& var1, T const& var2)
{
    return (var2 <= var1) ? var2 : var1;
}

template <typename T>
T const& max(T const& var1, T const& var2)
{
    return (var2 >= var1) ? var2 : var1;
}

#endif