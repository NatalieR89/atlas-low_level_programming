#include "main.h"

/**
 * _sqrt_recursion computes the square root
 * @n: the number to be square rooted
 *
 * Return: the root of "N"
 */
int _sqrt_helper(int n, int guess) 
{
    if (guess * guess == n) 
    {
        return guess;
    } 
    else if (guess * guess > n) 
    {
        return -1;
    } 
    else 
    {
        return _sqrt_helper(n, guess + 1);
    }
}

int _sqrt_recursion(int n) 
{
    if (n < 0) 
    {
        return -1;
    } 
    else if (n == 0 || n == 1) 
    {
	    return n;
    } 
    else 
    {
	return _sqrt_helper(n, 1);
    }
}
