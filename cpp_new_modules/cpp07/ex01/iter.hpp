#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, int len, void fun(const T&))
{
    for (int i = 0; i < len; i++)
        fun(array[i]);
}

#endif