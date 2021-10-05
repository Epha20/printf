#include "main.h"

/**
 * dec_to_oct - converts decimal to octal notation
 *
 * @num: number to be converted
 * Return: characters printed
 */
int dec_to_oct(unsigned int num)
{
	int chars_printed = 0;

	if (!num)
		return (0);
	chars_printed += (dec_to_oct(num / 8));
	chars_printed += _putchar('0' + num % 8);
	return (chars_printed);
}
