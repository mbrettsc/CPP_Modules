#pragma once

template<typename T>
class Array
{
private:
    T *mArray;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& copy);
    ~Array();
    Array &operator=(const Array& copy);
    T& operator[](const int location) const;
    unsigned int size() const;
};

#include "Array.tpp"
