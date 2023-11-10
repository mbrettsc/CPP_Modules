#include "Array.hpp"

#pragma once

template<typename T>
Array<T>::Array(): mArray(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n): mArray(new T[n]), _size(n) {}

template<typename T>
Array<T>::Array(const Array& copy): mArray(new T[copy._size]), _size(copy._size)
{
    for (size_t i = 0; i < _size; ++i) {
        mArray[i] = copy.mArray[i];
    }
}

template<typename T>
Array<T>::~Array() { if (mArray) delete[] mArray; }

template<typename T>
Array<T> &Array<T>::operator=(const Array& copy)
{
    if (this != &copy)
    {
        if (mArray)
            delete[] mArray;
        mArray = new T[copy._size];
        _size = copy._size;
        for (unsigned int i = 0; i < _size; ++i) {
            mArray[i] = copy.mArray[i];
        }
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](const int location) const
{
    if (location < 0 || location >= static_cast<int>(_size))
        throw std::runtime_error("Invalid array access");
    return mArray[location];
}

template<typename T>
unsigned int Array<T>::size() const { return _size; }
