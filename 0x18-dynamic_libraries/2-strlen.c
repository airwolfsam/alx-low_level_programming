#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that return the length of a string
 *
 * @s: first parameter
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
