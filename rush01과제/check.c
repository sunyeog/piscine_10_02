/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghyek <yonghyek@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:12:14 by yonghyek          #+#    #+#             */
/*   Updated: 2023/09/03 17:15:09 by yonghyek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_left(int grid[SIZE][SIZE], char *clue, int row)
{
	int	max_h;
	int	count_left;
	int	index;

	count_left = 1;
	max_h = grid[row][0];
	index = 1;
	while (index < SIZE)
	{
		if (grid[row][index] > max_h)
		{
			max_h = grid[row][index];
			count_left++;
		}
		index++;
	}
	return (count_left == clue[SIZE * 2 + row] - '0');
}

int	check_row_right(int grid[SIZE][SIZE], char *clue, int row)
{
	int	max_h;
	int	count_right;
	int	index;

	count_right = 1;
	index = SIZE - 1;
	max_h = grid[row][SIZE - 1];
	while (index >= 0)
	{
		if (grid[row][index] > max_h)
		{
			max_h = grid[row][index];
			count_right++;
		}
		index--;
	}
	return (count_right == clue[SIZE * 3 + row] - '0');
}

int	check_col_up(int grid[SIZE][SIZE], char *clue, int col)
{
	int	max_h;
	int	count_up;
	int	index;

	count_up = 1;
	max_h = grid[0][col];
	index = 1;
	while (index < SIZE)
	{
		if (grid[index][col] > max_h)
		{
			max_h = grid[index][col];
			count_up++;
		}
		index++;
	}
	return (count_up == clue[col] - '0');
}

int	check_col_down(int grid[SIZE][SIZE], char *clue, int col)
{
	int	max_h;
	int	count_down;
	int	index;

	count_down = 1;
	index = SIZE - 1;
	max_h = grid[SIZE - 1][col];
	while (index >= 0)
	{
		if (grid[index][col] > max_h)
		{
			max_h = grid[index][col];
			count_down++;
		}
		index--;
	}
	return (count_down == clue[SIZE + col] - '0');
}
