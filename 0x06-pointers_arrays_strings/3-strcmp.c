#include "main.h"

/**
 *
 * _strcmp - compares two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: 0 if matching, and ns1 - ns2 if not matching
 *
 */

int _strcmp(char *s1, char *s2)

{

int i = 0, r;

while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{
		r = s1[i] - s2[i];
		break;
	}
	else
	{
		r = s1[i] - s2[i];
	}
	i++;
}
return (r);
}
