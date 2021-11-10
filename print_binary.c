#include "main.h"

/**
 * print_binary - Convert an int to binary
 * and print it
 *
 * @arg: The variadic variable we need to
 * convert and print it
 *
 * Return: loop it's the length of the print
 */
int print_binary(va_list arg)
{
	int loop = 0;
	unsigned int toconvert = va_arg(arg, unsigned int);
	char *result;

	if (!toconvert)
		return (_putchar('0'));

	result = convert_binary(toconvert);

	if (result == NULL)
		return (0);

	while (result[loop] != '\0')
	{
		_putchar(result[loop]);
		loop++;
	}

	free(result);

	return (loop);
}

/**
 * _pow_recursion - Return the value of x raised to the power of y
 *
 * @x: The number we raised
 * @y: The exposant
 *
 * Return: -1 if y < 0, 1 if y == 0, the value of x^y
 */
int _pow_recursion(int x, int y)
{

	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
