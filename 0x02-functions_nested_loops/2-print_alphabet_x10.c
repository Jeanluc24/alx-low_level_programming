#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int a;

	a = 0;

	while (a < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		a++;
	}
}
