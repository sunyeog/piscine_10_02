/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:35:50 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/07 00:35:15 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 0;
	if (nb == 0)
	{
		return (1);
	}
	while (num + 1 < nb)
	{
		num++;
	}
	if (nb > 0)
	{
		while (0 < num)
		{
			nb = nb * num;
			num--;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
