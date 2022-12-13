#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0 mean success.
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
