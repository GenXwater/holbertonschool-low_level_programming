/**
 * leet -  encodes a string into 1337
 * @s: remplace caractère donné par un chiffre
 *
 * Return: s (ok)
 */
char *leet(char *s)
{
	char c[] = "aeotlAEOTL";
	char num[] = "4307143071";

	int i;

	char *ptr = s;

	while (*ptr != '\0')
	{
		for (i = 0; num[i]; i++)
		{
			if (*ptr == c[i])
				*ptr = num[i];
		}
		ptr++;
	}
	return (s);
}
