/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:02:52 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/07 00:27:13 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			num = num * nb;
			power--;
		}
		return (num);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
