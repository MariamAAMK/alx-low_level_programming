#include "main.h"
#include <unistd.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
  int x;
  unsigned int val;

  val = 0;
  if (!b)
    return (0);

  for (x=0; b[x] != '\0'; x++)
    {
      if(b[x] != '0' && b[x] != '1')
	return (0);
    }
  for (x = 0; b[x] != '\0'; x++)
    {
      val <<= 1;
      if (b[x] == '1')
	val += 1;
    }
  return(val);
}
