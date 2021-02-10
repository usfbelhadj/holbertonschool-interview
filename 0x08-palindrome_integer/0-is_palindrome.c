#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"
/**
*is_palindrome - Checks whether or not a given unsigned integer is a palindrome
*@n: The number to be checked
*Return : Function must return 1 if n is a palindrome, and 0 otherwise
 */

int is_palindrome(unsigned long n)
{
	int reversedN = 0, remainder, originalN;

	originalN = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversedN = reversedN * 10 + remainder;
		n /= 10;
	}

	if (originalN == reversedN)
		return (1);
	else
		return (0);
}
