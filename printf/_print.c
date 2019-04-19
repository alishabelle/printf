#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen - returns length of a string
 *@s: parameter
 * Return: returns an unsigned int
 */
unsigned int _strlen(char *s)
{
	unsigned int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}

/**
 *_putchar - writes a char to standard output
 *@c: parameter
 * Return: returns an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_printf - prints output to format
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	types array[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_sign},
		{'\0', NULL}
	};
	va_list list;
	unsigned int a, b, x = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			if (format[a +1] == '\0' || format[a + 1] == '\n')
				if (x == 0)
					return (-1);
			for (b = 0; array[b].typ != '\0'; b++)
			{
				if (format[a + 1] == array[b].typ)
				{
					x = array[b].f(list, x);
					a++;
					break;
				}
			}
			if (array[b].typ == '\0' && format[a + 1] != '\0')
				x = print_sign(list, x);
		}
		else
		{
			_putchar(format[a]);
			x++;
		}
	}
	va_end(list);
	return (x);
}
