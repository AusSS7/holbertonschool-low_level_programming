#include <string.h>

/**
* *_strstr - locates a substring
* @haystack: string to be examined
* @needle: string to be searched in haystack
* Return: first character of the found needle in haystach otherwise a null.
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	while (*haystack)
	{
		for (; needle[a] && haystack[a] && needle[a] == haystack[a]; a++)
			;
		if (!needle[a])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
