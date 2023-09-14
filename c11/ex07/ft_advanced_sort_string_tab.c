/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:05:45 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/15 02:58:04 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
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
