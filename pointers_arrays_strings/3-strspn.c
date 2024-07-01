#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main C string to be scanned
 * @accept: The string containing the list of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, found, v;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[i] == accept[v])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
