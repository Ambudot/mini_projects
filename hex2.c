int	ft_atoi(char *str);
void	ft_putchar(char c);

void	ft_convert(int	nb)
{
	char	hex[16]="012346789ABCDEF";

	if (nb <= 15)
	{
		ft_putchar('0');
		ft_putchar(hex[nb]);
	}
	else
	{
		ft_putchar(hex[nb / 16 - 1]);
		ft_putchar(hex[nb % 16- 1]);
	}
}

int	main(int ac, char **av)
{
	int	i;
	
	i = 1;
	if (ac != 4)
		return (0);
	ft_putchar('#');
	while (i < 4)
	{
		if (ft_atoi(av[i]) >= 255)
			return (0);
		ft_convert(ft_atoi(av[i++]));
	}
	return (0);
}
