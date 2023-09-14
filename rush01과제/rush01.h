/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RUSH01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghyek <yonghyek@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:20:01 by yonghyek          #+#    #+#             */
/*   Updated: 2023/09/04 02:03:57 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>
# define SIZE 4

int		check_row_left(int grid[SIZE][SIZE], char *clue, int row);
int		check_row_right(int grid[SIZE][SIZE], char *clue, int row);
int		check_col_up(int grid[SIZE][SIZE], char *clue, int col);
int		check_col_down(int grid[SIZE][SIZE], char *clue, int col);
void	print_grid(int grid[SIZE][SIZE]);
void	fill_grid(int grid[SIZE][SIZE]);
int		check_duplicate(int grid[SIZE][SIZE], int row, int col);
int		solve(int grid[SIZE][SIZE], char *clue, int row, int col);
int		check_grid(int grid[SIZE][SIZE], char *clue, int row, int col);
int		ft_is_numeric(char c);
char	*ft_rm_whitespace(char *str);
int		ft_is_whitespace(char *str);
int		ft_strlen(char *str);

#endif
