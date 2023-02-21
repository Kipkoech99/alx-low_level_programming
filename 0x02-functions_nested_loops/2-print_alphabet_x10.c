#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)

{

	print_alphabet_x10(void)
	{
		char c;
		int i;

		for (i = 0; i < 10; i++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
	return (0);

}
