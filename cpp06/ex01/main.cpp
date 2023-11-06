#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data *ds = new Data;
    ds->a = 42;
    ds->b = ds->a * 1e-2;

    std::cout << ds << std::endl;
    uintptr_t rawPtr = Serializer::serialize(ds);
    std::cout << rawPtr << std::endl;
    Data *tmp = NULL;
    tmp = Serializer::deserialize(rawPtr);
    std::cout << tmp << std::endl << tmp->a << std::endl << tmp->b << std::endl;
    delete ds;
    return 0;
}