#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

#define BUFFER_SIZE 1024

/**
 * struct modifier - mofifier fields collection
 * @flags: flags field composed of ['0', ' ', '#', '+', '-']
 * @width: width field, positive number
 * @precision: precision field positive number not including '.'
 * or -1 for '*'
 * @length: length field string composed of ['h', 'l']
 * @specifier: specifier character can one of
 * ['c', 's', '%', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'S', 'p', 'r', 'R']
 *
 */
typedef struct modifier
{
	char *flags;
	int width;
	int precision;
	char *length;
	char specifier;
} modifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_num(long int n);
int print_string(char *str);
int print_binary(unsigned int num);
int print_unknown_spec(char c);
int print_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int print_S(char *);
int print_reverse(char *s);
int print_rot13(char *c);
int print_pointer(void *p);

#endif /* MAIN_H */
