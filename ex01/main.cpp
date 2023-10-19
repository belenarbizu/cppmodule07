#include "iter.hpp"

void fillZeros(int & n)
{
    n = 0;
}

int main(void)
{
    int num[] = {1, 2, 3, 4};
    std::cout << "Before: " << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    iter(num, 4, fillZeros);
    std::cout << "After: " << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
}