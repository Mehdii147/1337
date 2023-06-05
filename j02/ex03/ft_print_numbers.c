/* #include <unistd.h>
void ft_print_numbers(void)
{
	char nb;
	nb ='0';

	while (nb <=9)
	{
	write (1 ,&nb, 1);
	nb++;
	}
}
int	main()
{
	ft_print_numbers();
}
*/
#include <unistd.h>
void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}

int	main()
{
	ft_print_numbers();
}
