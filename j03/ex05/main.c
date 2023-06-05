#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	char *str;

	str = "Hello World!";
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
