#include <stdio.h>
/**
  *main - This prints the alphabet from A-z
  *Return: Always 0
  */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;

	}

	putchar('\n');
	return (0);

}
