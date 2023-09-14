/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:10:52 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/13 21:10:04 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		test(char a, char *charset);
int		count(char *str, char *charset);
void	save_str(char *str, char *charset, char *ptr);
void	save_split(char *str, char *charset, char **split);
char	**ft_split(char *str, char *charset);

int	test(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (a == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (a == '\0')
		return (1);
	return (0);
}

int	count(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if ((test(str[i + 1], charset) == 1) && (test(str[i], charset) == 0))
				cnt++;
		i++;
	}
	return (cnt);
}

void	save_str(char *str, char *charset, char *ptr)
{
	int	i;

	i = 0;
	while (test(str[i], charset) != 1)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
}

void	save_split(char *str, char *charset, char **split)
{
	int	i;
	int	j;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (test(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (test(str[i + j], charset) == 0)
			{
				j++;
			}
			split[cnt] = (char *)malloc(sizeof(char) * (j + 1));
			save_str(str + i, charset, split[cnt]);
			i = i + j;
			cnt++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		cnt;
	char	**len;

	cnt = count(str, charset);
	len = (char **)malloc(sizeof(char *) * (cnt + 1));
	len[cnt] = 0;
	save_split(str, charset, len);
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	*b;
	char	**grid;
	int		i;
	a = "hell!@#$o my n!am#e i$s k@!you, alw#ays $!love y$$a, hehe#!ehee";
	b = "!@#$";
	grid = ft_split(a , b);
	i = 0;
	printf("원래문자열 :%s \n 구분자 : %s \n", a, b);
	while (grid[i])
	{
		printf("%d번째! %s \n", i, grid[i]);
		i++;
	}
	return (0);
}*/
