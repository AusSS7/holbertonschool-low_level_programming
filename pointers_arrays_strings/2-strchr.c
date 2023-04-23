#include <string.h>

/**
* *_strchr - locates a character in a string
* @s: string to be scanned
* @c: character to be searched in s
* Return: pointer to first occurence of c, NULL if not found
*/

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
