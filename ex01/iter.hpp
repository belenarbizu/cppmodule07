#pragma once

#include <string>

template <typename T>
void iter(T *array, int len, void (* foo)(T &))
{
    if (array == NULL || foo == NULL)
        return ;
    for (int i = 0; i < len; i++)
    {
        foo(array[i]);
    }
}