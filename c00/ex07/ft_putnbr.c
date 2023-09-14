/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:19:40 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/11 19:33:02 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
