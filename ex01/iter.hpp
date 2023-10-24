#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (* foo)(T &))
{
    if (array == NULL || foo == NULL)
        return ;
    for (size_t i = 0; i < len; i++)
    {
        foo(array[i]);
    }
}

#endif