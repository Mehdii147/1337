#include "main.h"

int		main(void)
{
	int n;

	n = 5;
	printf("n = %i\n\nft_ft(n)\n", n);
	ft_ft(&n);
	printf("\nn = %i\n", n);
	return (0);
}
