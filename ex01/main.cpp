#include "iter.hpp"

void fillZeros(int n)
{
    n = n + '0';
}

int main(void)
{
    int num[] = {1, 2, 3, 4};
    ::iter(num, 4, fillZeros);
}