/**
 * string_toupper - Convert ttes lettres minuscules d'un string en majuscules
 * @str: La chaîne à convertir.
 *
 * Return: Un pointeur vers la chaîne convertie.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
