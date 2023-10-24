#pragma once
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
T max(const T& x, const T& y)
{
    return ( (x > y) ? x : y );
}

template <typename V>
V min(const V& x, const V& y)
{
    return ( (x < y) ? x : y );
}

template <typename U>
void swap(U& x, U& y)
{
    U u;
    u = x;
    x = y;
    y = u;
}

#endif