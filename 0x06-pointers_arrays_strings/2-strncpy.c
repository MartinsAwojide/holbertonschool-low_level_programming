#include "holberton.h"

/**
* _strncpy - copies a string
* @dest: string destiny
* @src: string to copy
* @n: number of bytes
* Return: a pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
