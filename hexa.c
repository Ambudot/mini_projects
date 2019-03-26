#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_converter(int c)
{
	int	x;
	char	y;

	x = 0;
	y = 'A';
	if (c / 16 != 0)
	{
		x = c / 16;
		if (c > 9)
			ft_putchar(y + x - 10);
		else
		{
			if (x > 9)
				ft_putchar(y + x - 10);
			else
				ft_putchar(x + '0');
		}
	}
	else
	{
		x = c % 16;
		ft_putchar('0');
		if (x > 9)
			ft_putchar(y + x - 10);
		else
			ft_putchar(x + '0');
		return ;
	}
	x = c % 16;
	if (x > 9)
		ft_putchar(y + x - 10);
	else
		ft_putchar(x + '0');
}

int	main(int ac, char **av)
{
	int	i;
	
	if (ac != 4)
		return (0);
	i = 1;
	ft_putchar('#');
	while (i < 4)
	{
		if (atoi(av[i]) > 255)
			return (0);
		ft_converter(atoi(av[i++]));
	}
	ft_putchar('\n');	
	return (0);
}
