#include "Array.hpp"

int main(void)
{
    Array<int>  ArrayInt(5);
    for (int i = 0; i < 5; i++)
    {
        ArrayInt[i] = i + 1;
    }
    std::cout << "size: " << ArrayInt.size() << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << ArrayInt[i] << std::endl;
    }
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
    Array<int>  ArrayZero;
    std::cout << "size: " << ArrayZero.size() << std::endl;
    return 0;
}