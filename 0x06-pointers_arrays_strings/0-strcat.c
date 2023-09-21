#include "main.h"

/**
 * _stract - entry point
 * @dest: the input that we deal whit it
 * @src: the input that we deal whit it
 * Return: (Success)
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
