/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghyek <yonghyek@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:24:25 by yonghyek          #+#    #+#             */
/*   Updated: 2023/09/03 17:36:56 by yonghyek         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_is_numeric(char c)
{
	if (!(c >= '1' && c <= SIZE + '0'))
		return (0);
	return (1);
}

char	*ft_rm_whitespace(char *str)
{
	int		idx;
	char	*c;

	c = str;
	idx = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			c[idx] = *str;
			str++;
			idx++;
		}
	}
	c[idx] = '\0';
	return (c);
}

int	ft_is_whitespace(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0' && idx < SIZE * 8 - 1)
	{
		if (idx % 2 == 1)
		{
			if (str[idx] != ' ')
				return (0);
		}
		else
		{
			if (!(ft_is_numeric(str[idx])))
				return (0);
		}
		idx++;
	}
	if (str[idx] != '\0')
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}

int	main(int argc, char **argv)
{
	char	*clue;
	int		grid[SIZE][SIZE];

	if (argc == 2)
	{
		if (ft_is_whitespace(argv[1]))
		{
			clue = ft_rm_whitespace(argv[1]);
			if (ft_strlen(clue) != SIZE * 4)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			fill_grid(grid);
			if (solve(grid, clue, 0, 0))
				print_grid(grid);
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
