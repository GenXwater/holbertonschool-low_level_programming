#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	int i;
	
	if (*s == '\0')
	{
		return;
	}
		
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	printf("\n");
}
