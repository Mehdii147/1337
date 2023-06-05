#include "main.h"

int		main(void)
{
	int a;
	int b;

	a = 7;
	b = 42;
	printf("a = %i , b = %i\n\n", a, b);
	ft_swap(&a, &b);
	printf("ft_swap(a, b)\n\na = %i , b = %i\n", a, b);
	return (0);
}
