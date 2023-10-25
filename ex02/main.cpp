#include "Array.hpp"

int main(void)
{
    Array<int>  ArrayInt(5);
    std::cout << "-----------Array without data-----------" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << ArrayInt[i] << std::endl;
    }
    std::cout << "-----------Array with data-----------" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        ArrayInt[i] = i + 1;
    }
    std::cout << "size: " << ArrayInt.size() << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << ArrayInt[i] << std::endl;
    }
    std::cout << "-----------Change data-----------" << std::endl;
    ArrayInt[2] = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << ArrayInt[i] << std::endl;
    }
    std::cout << "-----------Copy Array-----------" << std::endl;
    Array<int>  FirstArray(4);
    Array<int>  ArrayCopy(2);
    for (int i = 0; i < 4; i++)
    {
        std::cout << FirstArray[i] << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        FirstArray[i] = i + 2;
    }
    ArrayCopy = FirstArray;
    for (int i = 0; i < 4; i++)
    {
        std::cout << ArrayCopy[i] << std::endl;
    }
    std::cout << "-----------Out of range-----------" << std::endl;
    try
    {
        std::cout << ArrayInt[-3] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << ArrayInt[6] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------ArrayZero-----------" << std::endl;
    Array<int>  ArrayZero;
    std::cout << "size: " << ArrayZero.size() << std::endl;
    return 0;
}