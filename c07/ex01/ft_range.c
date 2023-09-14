/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:08:15 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/11 08:11:46 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*temp;

	if (max <= min)
		return (0);
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		temp[i] = min + i;
		i++;
	}
	return (temp);
}
