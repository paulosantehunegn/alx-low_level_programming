#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)

{

		return (write(1, &c, 1));

}

#include "main.h"
/**
 * main - prints to string
 * Description: Prints positive, negative or zero
 * Return: 0 Always
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');

	_putchar('\n');

	return (0);
}

