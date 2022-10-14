#include "main.h"
/**
 * _strcmp - comparing two strings
 *
 * @s1: first pointer parameter
 * @s2: second pointer parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		flag = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			return (flag);
		}
	}
	return (0);

}
