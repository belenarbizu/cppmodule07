#pragma once

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