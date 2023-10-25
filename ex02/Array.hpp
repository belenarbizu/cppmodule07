#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
private:
    T *data;
    unsigned int _n;
public:
    Array()
    {
        this->_n = 0;
        this->data = nullptr;
    }
    Array(unsigned int n)
    {
        this->_n = n;
        this->data = new T[n];
        for (unsigned int i = 0; i < n; i++)
        {
            this->data[i] = 0;
        }
    }
    ~Array()
    {
        if (this->_n > 0)
            delete[] this->data;
    }
    Array(const Array & a)
    {
        *this = a;
    }
    Array& operator=(const Array & a)
    {
        if (this->_n)
        {
            delete[] this->data;
        }
        this->_n = a.size();
        this->data = new T[a.size()];
        for (unsigned int i = 0; i < this->_n; i++)
        {
            this->data[i] = a.data[i];
        }
        return *this;
    }

    unsigned int size() const
    {
        return (this->_n);
    }

    class OutOfRange : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return ("Out of range");
            }
    };

    T& operator[](unsigned int n)
    {
        if (n < 0 || n >= this->_n)
        {
            throw (OutOfRange());
        }
        return (this->data[n]);
    }
};

#endif