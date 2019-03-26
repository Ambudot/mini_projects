/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 22:17:25 by jopaning          #+#    #+#             */
/*   Updated: 2019/03/12 22:46:19 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test(char *str)
{
	while ((*str >= 9 && *str <= 13 && *str != '\0') || *str == 32)
		str++;
}

int		ft_atoi(char *str)
{
	int				nb;
	int				positive;

	nb = 0;
	positive = 1;
	test(str);
	if (*str == '-')
	{
		positive = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str) - '0';
		str++;
	}
	return (nb * positive);
}
