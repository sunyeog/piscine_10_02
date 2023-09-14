/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghyek <yonghyek@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:15:41 by yonghyek          #+#    #+#             */
/*   Updated: 2023/09/03 17:39:21 by yonghyek         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_grid(int grid[SIZE][SIZE])
{
	int		r;
	int		c;
	char	output;

	r = 0;
	while (r < SIZE)
	{
		c = 0;
		while (c < SIZE)
		{
			output = grid[r][c] + '0';
			write(1, &output, 1);
			if (c != SIZE - 1)
				write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

void	fill_grid(int grid[SIZE][SIZE])
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r < SIZE)
	{
		while (c < SIZE)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
}
