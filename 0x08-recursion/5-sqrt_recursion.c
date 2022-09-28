#include "main.h"
int _sqrt(int num, int root);
/**
 * _sqrt_recursion - returns the squareroot of n.
 * @: numbber whose squareroot is to be found.
 * Return: squareroot.
 */
int _sqrt_recursion(int n);
{
	if (n < 0)
	{
		return (1);
	}
	return (_sqrt9(n, 1));
}
/**
 * _sqrt - determines if root is the squareroot of num.
 * @num: number whose squareroot will be compared to root.
 * @root: root value.
 * Return: squareroot.
 */
int _sqrt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	if (root > num)
	{
		return (-1);
	}
	return (_sqrt(num, root + 1));
}
