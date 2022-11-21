/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"
#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 1); //Pre-condition for our function

    if(n == 1)
        return p; //The base case of our recursive fucntion
    else
        return fib(n - 1, pp, p + pp); //The recursive tail step for our recursive function
    return 0;
}