#include "armstrong_numbers.h"
bool is_armstrong_number(int candidate)
{
    int d[10], i = 0, r = 0, num = candidate;
    while (num)
    {
        d[i] = num % 10;
        num = num / 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        r = r + pow(d[j], i);
    }
    return candidate == r ? true : false;
}


