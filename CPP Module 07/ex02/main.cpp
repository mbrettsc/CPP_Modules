#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    Array<std::string> strs(MAX_VAL);
    std::string *mir = new std::string[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        strs[i] = "a";
        mir[i] = "a";

    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        numbers[0] = 5;
        std::cout << "numbers = " << numbers[0] << " tmp = " << tmp[0] << std::endl;

    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "numbers = " << numbers[i] << " mirrors = " << mirror[i] << std::endl;

        std::cout << "strs = " << strs[i] << " mirs = " << mir[i] << std::endl;

        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
