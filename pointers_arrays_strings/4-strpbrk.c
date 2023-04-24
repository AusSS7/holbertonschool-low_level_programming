#include <string.h>

/**
* *_strpbrk -
* s − This is the C string to be scanned.
* accept − This is the C string containing the characters to match.
* Return:
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		       	/* printf("%c", accept[a]);*/
			if (*s == accept[a])
			{
				/*printf("\n%s\n", s); */
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}
