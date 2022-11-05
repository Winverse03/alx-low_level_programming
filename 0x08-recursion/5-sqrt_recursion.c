#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of
 * @root: The root to be tested.
 * @n: integer to be square rooted
 * Return: the natural square root found
 */

int find_sqrt(int num, int root)
{

	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));

}
int _sqrt_recursion(int n)
{

	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
