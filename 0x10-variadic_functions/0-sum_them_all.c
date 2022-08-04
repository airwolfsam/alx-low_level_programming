#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of it's parametres
 * @n: n args
 * Return:sum or If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
	
		sum += va_arg(list, int);
		
	va_end(list);
	
	return (sum);

}

