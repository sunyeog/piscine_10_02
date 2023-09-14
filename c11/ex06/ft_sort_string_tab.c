/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:59:05 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/15 02:57:51 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while ((a[i] == b[i]) && (a[i] && b[i]))
	{
		i++;
	}
	return (a[i] - b[i]);
}

int	count_arr(char **tab)
{
	int	i;
	int	j;
	int	cnt;

	j = 0;
	i = 0;
	cnt = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j] != '\0')
		{
			j++;
		}
		cnt++;
		i++;
	}
	return (cnt);
}

void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int		i;
	int		j;
	int		cnt;

	cnt = count_arr(tab);
	j = 0;
	while (j < cnt - 1)
	{
		i = 0;
		while (i < cnt - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>
void	ft_sort_string_tab(char **tab);
int		main(int argc, char **argv)
{
	int		i;
	ft_sort_string_tab(argv);
	i = -1;
	while (++i < argc)
		printf("%s\n", argv[i]);
}*/
