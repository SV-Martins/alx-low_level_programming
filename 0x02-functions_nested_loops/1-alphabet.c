#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0.
 */
int _putchar();
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
