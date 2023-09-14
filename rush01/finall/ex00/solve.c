/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghyek <yonghyek@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:25:16 by yonghyek          #+#    #+#             */
/*   Updated: 2023/09/03 17:30:02 by yonghyek         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_duplicate(int grid[SIZE][SIZE], int row, int col)
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r < row)
	{
		if (grid[r][col] == grid[row][col])
			return (1);
		r++;
	}
	while (c < col)
	{
		if (grid[row][c] == grid[row][col])
			return (1);
		c++;
	}
	return (0);
}

int	solve(int grid[SIZE][SIZE], char *clue, int row, int col)
{
	int	check;
	int	h;

	h = 1;
	check = check_grid(grid, clue, row, col);
	if (check != -1)
		return (check);
	while (h <= SIZE)
	{
		grid[row][col] = h;
		if (!check_duplicate(grid, row, col))
		{
			if (solve(grid, clue, row, col + 1))
				return (1);
		}
		grid[row][col] = 0;
		h++;
	}
	return (0);
}

int	check_grid(int grid[SIZE][SIZE], char *clue, int row, int col)
{
	int	c;

	c = 0;
	if (row == SIZE)
	{
		while (c < SIZE)
		{
			if (!check_col_up(grid, clue, c) || !check_col_down(grid, clue, c))
				return (0);
			c++;
		}
		return (1);
	}
	if (col == SIZE)
	{
		if (!check_row_left(grid, clue, row)
			|| !check_row_right(grid, clue, row))
			return (0);
		return (solve(grid, clue, row + 1, 0));
	}
	return (-1);
}
