/**
 * leet - Encodes a string into leet spelling.
 * @s: string to process
 *
 * Return: the leeted string
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
