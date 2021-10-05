#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @src: the buffer to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *src)
{
	char *dest;
	int len = 0;
	int i;

	while (src[len] != 0)
	{
		len++;
	}
	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
