#include <main.h>

/**
 * print_odh - prints a number in its octal, decimal or hex representation
 *
 * @c: type to be converted into
 * @num: number to be converted
 * Return: characters printed
 */
int print_odh(char c, unsigned int num)
{
	int chars_printed = 0;

	if (c == 'u')
		chars_printed += print_num(num);
	else if (c == 'o' && num == 0)
		chars_printed = print_string("00");
	else if (c == 'o')
		chars_printed += dec_to_oct(num);
	else if ((c == 'x' || c == 'X') && num == 0)
		chars_printed += print_string("00");
	else
		chars_printed += dec_to_hex(c, num);
	return (chars_printed);
}
