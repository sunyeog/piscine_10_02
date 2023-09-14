/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:32:19 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/02 16:57:11 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lowercase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i])
	{
		if (!((str[i - 1]) >= 'a' && str[i - 1] <= 'z')
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i] = str[i];
			else if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
