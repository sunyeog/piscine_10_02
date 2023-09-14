/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:53:07 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/11 06:37:08 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	extraction(long long int nb)
{
	long long int	x;
	long long int	y;
	long long int	z;

	x = 1;
	while (x <= nb)
	{
		x *= 10;
		y = x / 10;
	}
	while (x > 1)
	{
		z = nb % x;
		z = z / y;
		ft_putchar(z + '0');
		x /= 10;
		y = x / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		extraction(nb);
	}
	else if (nb > 0)
	{
		extraction(nb);
	}
	else
	{
		ft_putchar(0 + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr((*par).str);
	write(1, "\n", 1);
	ft_putnbr((*par).size);
	write(1, "\n", 1);
	ft_putstr((*par).copy);
	write(1, "\n", 1);
}
