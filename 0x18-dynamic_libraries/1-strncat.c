#include "main.h"
/**
 * _strncat - concatinating strings
 *
 * @dest: first pointer parameter
 * @src: second pointer parameter
 * @n: last parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] && j  < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
