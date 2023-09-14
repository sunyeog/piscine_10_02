/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 03:02:20 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/11 03:06:29 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*mallen(int size, char **strs, char *sep)
{
	int		len;
	char	*temp;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < (size - 1))
	{
		len += ft_strlen(sep);
		i++;
	}
	temp = (char *)malloc(sizeof(char) * len);
	if (size == 0)
	{
		temp = (char *)malloc(1);
	}
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	temp = mallen(size, strs, sep);
	if (size == 0)
		return (temp);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			temp[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && (i < size - 1))
		{
			temp[k++] = sep[j++];
		}
	}
	temp[k] = '\0';
	return (temp);
}
