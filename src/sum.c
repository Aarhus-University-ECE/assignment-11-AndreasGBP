#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* Pre-condition */
  assert (n >= 1);
/* Post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    assert(n >= 1); //Pre-condition
    
    if(n == 1)
      return 1 + total; //Base case
    else
      return sumtail(n - 1, total + n); //Recursive step
    return 0;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1); //The pre-condtition

  int sum = 0; //Variable to store the total sum
  while(n > 0) {
    sum += n; //Adds n to sum, for all numbers from 0 to n in descending order
    n--;
  }
  return sum;
}