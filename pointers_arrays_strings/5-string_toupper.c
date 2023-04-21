#include <string.h>
#include <stdlib.h>

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @str: pointer variable string
* Return: str
*/

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 97 + 65;
	}
	return (str);
}
