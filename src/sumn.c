#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if(n == 1)
        return 1; //The base case
    else
        return (n * 2 - 1) + sumn(n - 1); //The recursive step
    return 0;
}