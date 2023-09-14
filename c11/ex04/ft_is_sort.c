/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:52:02 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/15 02:30:46 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	min;
	int	plu;

	i = 0;
	min = 0;
	plu = 0;
	while (i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			plu++;
		else if (f(tab[i], tab[i + 1]) <= 0)
			min++;
		i++;
	}
	if (min == i || plu == i)
	{
		return (1);
	}
	return (0);
}
