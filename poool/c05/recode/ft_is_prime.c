int	ft_is_prime(int nb)
{
	int	count;

	if (nb == 2)
	{
		return (1);
	}
	else if (nb <= 1)
	{
		return (0);
	}
	count = nb / 2;
	while (count > 1)
	{
		if (nb % count == 0)
		{
			return (0);
		}
		count--;
	}
	return (1);
}