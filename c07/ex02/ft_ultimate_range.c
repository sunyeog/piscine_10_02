/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:14:18 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/11 03:09:36 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (i);
}
