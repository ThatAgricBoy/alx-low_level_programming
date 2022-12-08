#include <stdio.h>
/**
  * main - Start
  * Return: 0
*/

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	Printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	Printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	Printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	Printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	Printf("size of a float : %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
