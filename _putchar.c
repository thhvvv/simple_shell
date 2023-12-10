#include "main.h"
/**
 * _putchar - write the character c to stdout
 * @ch: character to print
 *
 * Return: 1(success), -1(fail)
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
