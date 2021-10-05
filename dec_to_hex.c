#include <main.h>

/**
 * dec_to_hex - converts decimal to hexadecimal notation
 *
 * @c: letter case specifier
 * @num: number to be converted
 * Return: characters printed
 */
int dec_to_hex(char c, unsigned int num)
{
	int chars_printed = 0;

	if (!num)
		return (0);
	chars_printed += dec_to_hex(c, num / 16);
	if (num % 16 < 10)
		chars_printed += _putchar('0' + num % 16);
	else if (num % 16 > 9 && c == 'x')
		chars_printed += _putchar(87 + num % 16);
	else
		chars_printed += _putchar(55 + num % 16);
	return (chars_printed);
}
