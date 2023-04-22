#include <stdlib.h>
#include <string.h>

/**
 * *leet - encodes a string into 1337.
 *
 * Return:
 */

char *leet(char *s)
	{
  int a;

  for (a = 0; s[a] != '\0'; a++)
  {
      while (s[a] == 65 || s[a] == 97)
      {
          s[a] = 52;
      }
      while (s[a] == 69 || s[a] == 101)
      {
          s[a] = 51;
      }
      while (s[a] == 79 || s[a] == 111)
      {
          s[a] = 48;
      }
      while (s[a] == 84 || s[a] == 116)
      {
          s[a] = 55;
      }
      while (s[a] == 76 || s[a] == 108)
      {
          s[a] = 49;
      }
  }
  return (s);
}
